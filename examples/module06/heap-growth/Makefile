CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99

.PHONY: build test clean

build: main

main: main.o
	$(CC) $(CFLAGS) $^ -o $@

test: main
	./main

clean:
	rm -f *.o *.d *.s a.out main