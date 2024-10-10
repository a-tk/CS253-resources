CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build test clean

build: main ItemStats

main: main.o ItemToPurchase.o
	$(CC) $(CFLAGS) $^ -o $@

ItemStats: ItemStats.o ItemToPurchase.o
	$(CC) $(CFLAGS) $^ -o $@

test: main
	./main

clean:
	rm -f *.o *.d *.s a.out main