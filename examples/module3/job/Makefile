CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g -D_GNU_SOURCE

.PHONY: build clean

build: simple-test

simple-test: simple-test.o Job.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o *.d *.s a.out simple-test