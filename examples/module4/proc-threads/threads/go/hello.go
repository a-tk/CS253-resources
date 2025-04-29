package main

import (
	"fmt"
	"sync"
)

func printMessage(wg *sync.WaitGroup, message string) {
	defer wg.Done()
	fmt.Print(message + " ")
}

func main() {
	var wg sync.WaitGroup
	wg.Add(2)

	go printMessage(&wg, "Goodbye")
	go printMessage(&wg, "World")

	wg.Wait()
}
