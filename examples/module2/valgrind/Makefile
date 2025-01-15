CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build test clean

build: main buggy

main: main.o 
	$(CC) $(CFLAGS) $^ -o $@

buggy: buggy.o 
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o *.d *.s a.out main