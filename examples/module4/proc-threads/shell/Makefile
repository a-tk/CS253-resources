CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: simple-shell readline-shell

simple-shell: simple-shell.o
	$(CC) $(CFLAGS) $^ -o $@

readline-shell: readline-shell.o
	$(CC) $(CFLAGS) -lreadline -lncurses $^ -o $@

clean:
	rm -f *.o *.d a.out simple-shell readline-shell
