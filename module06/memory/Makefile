CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99

.PHONY: build test clean

build: main main.s

main: main.o
	$(CC) $(CFLAGS) $^ -o $@

main.s: main.c
	$(CC) $(CFLAGS) -S $^ -o $@

test: main
	./main

clean:
	rm -f *.o *.d *.s a.out main