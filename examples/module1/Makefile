CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build clean

build: range range.o range.s range.e

range: range.o
	$(CC) $(CFLAGS) range.o -o range

range.o: range.c
	gcc $(CFLAGS) -c range.c -o range.o

range.s: range.c
	gcc $(CFLAGS) -S range.c -o range.s

range.e: range.c
	gcc $(CFLAGS) -E range.c -o range.e

clean:
	rm -f range.e range.o range.d range.i range.e range range.s