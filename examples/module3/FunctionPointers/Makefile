
CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build test clean

build: printer

printer: printer.o
	$(CC) $(CFLAGS) $^ -o $@ 


clean:
	rm -f *.o *.d a.out printer
