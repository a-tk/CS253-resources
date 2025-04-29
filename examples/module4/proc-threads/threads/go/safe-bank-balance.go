package main

import (
	"fmt"
	"os"
	"strconv"
	"sync"
)

type Account struct {
	balance float64
	mutex   sync.Mutex
}

var myacct *Account

func threadMain(wg *sync.WaitGroup, count int) {
	defer wg.Done()

	for i := 0; i < count; i++ {
		myacct.mutex.Lock()
		myacct.balance += 1.0
		myacct.mutex.Unlock()
	}
}

func main() {
	if len(os.Args) < 3 {
		fmt.Fprintf(os.Stderr, "Usage: %s <num_threads> <iterations>\n", os.Args[0])
		os.Exit(1)
	}

	numThreads, _ := strconv.Atoi(os.Args[1])
	count, _ := strconv.Atoi(os.Args[2])

	if numThreads > 32 {
		fmt.Fprintf(os.Stderr, "Too many threads. Defaulting to 32.\n")
		numThreads = 32
	}

	myacct = &Account{balance: 0.0}
	fmt.Printf("initial balance = %f\n", myacct.balance)

	var wg sync.WaitGroup
	wg.Add(numThreads)

	for i := 0; i < numThreads; i++ {
		go threadMain(&wg, count)
	}

	wg.Wait()

	fmt.Printf("final balance = %f\n", myacct.balance)
}
