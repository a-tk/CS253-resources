package main

import (
	"fmt"
	"os"
	"strconv"
	"sync"
	"time"
)

var (
	values []int
	n      int
	result [2]int
)

func partialSum(index int, start int, end int, wg *sync.WaitGroup) {
	defer wg.Done()

	fmt.Printf("%d ", index+1)
	sum := 0
	for i := start; i <= end; i++ {
		sum += values[i]
	}
	result[index] = sum
}

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s <n>\n", os.Args[0])
		os.Exit(64) // EX_USAGE
	}

	var err error
	n, err = strconv.Atoi(os.Args[1])
	if err != nil || n <= 0 {
		fmt.Fprintf(os.Stderr, "Invalid value for n\n")
		os.Exit(64)
	}

	values = make([]int, n)
	for i := range values {
		values[i] = 1
	}

	startTime := time.Now()

	var wg sync.WaitGroup
	wg.Add(2)

	// Thread 1: first half
	go partialSum(0, 0, n/2, &wg)

	// Thread 2: second half
	go partialSum(1, n/2+1, n-1, &wg)

	wg.Wait()

	sum := result[0] + result[1]
	totalTime := time.Since(startTime).Seconds()

	fmt.Printf("Total sum = %d time taken = %f seconds\n", sum, totalTime)
}
