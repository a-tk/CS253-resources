CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99

.PHONY: build test clean

build: main swap

main: main.o
	$(CC) $(CFLAGS) $^ -o $@

swap: swap.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o *.d *.s a.out main swap