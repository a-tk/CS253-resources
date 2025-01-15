CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: simple-shell

simple-shell: simple-shell.o error.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o *.d a.out simple-shell
