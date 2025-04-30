package main

import (
	"fmt"
	"os"
	"strconv"
	"sync"
	"syscall"
	"time"
)

func partialSum(index int, start int, end int, result []int, values []int, wg *sync.WaitGroup) {
	defer wg.Done()

	sum := 0
	for i := start; i <= end; i++ {
		sum += values[i]
	}
	result[index] = sum
}

func main() {
	if len(os.Args) != 3 {
		fmt.Fprintf(os.Stderr, "Usage: %s <num_threads> <n>\n", os.Args[0])
		return
	}

	num_threads, _ := strconv.Atoi(os.Args[1])

	n, _ := strconv.Atoi(os.Args[2])

	values := make([]int, n)
	for i := range values {
		values[i] = 1
	}

	result := make([]int, num_threads)

	var rusageStart syscall.Rusage
	syscall.Getrusage(syscall.RUSAGE_SELF, &rusageStart)
	startTime := time.Now()

	var wg sync.WaitGroup
	wg.Add(num_threads)

	for i := 0; i < num_threads; i++ {
		start := i * (n / num_threads)
		end := ((i+1)*(n/num_threads) - 1)
		go partialSum(i, start, end, result, values, &wg)
	}

	wg.Wait()

	sum := 0
	for i := range result {
		sum += result[i]
	}

	var rusageEnd syscall.Rusage
	syscall.Getrusage(syscall.RUSAGE_SELF, &rusageEnd)

	totalTime := time.Since(startTime).Milliseconds()

	userCPU := (rusageEnd.Utime.Nano() - rusageStart.Utime.Nano()) / 1000000
	systemCPU := (rusageEnd.Stime.Nano() - rusageStart.Stime.Nano()) / 1000000
	totalCPU := userCPU + systemCPU

	fmt.Printf("Total sum = %d time taken = %d milliseconds\n", sum, totalTime)
	fmt.Printf("Total user time taken = %d milliseconds\n", userCPU)
	fmt.Printf("Total sys time taken = %d milliseconds\n", systemCPU)
	fmt.Printf("Total CPU time taken = %d milliseconds\n", totalCPU)

}
