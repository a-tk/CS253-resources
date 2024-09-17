CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99

.PHONY: build test clean

build: main bool bool.i

main: main.o
	$(CC) $(CFLAGS) $^ -o $@


bool: bool.o
	$(CC) $(CFLAGS) $^ -o $@

bool.i: bool.c
	$(CC) $(CFLAGS) -E $^ -o $@

clean:
	rm -f *.o *.d *.s *.i a.out main bool