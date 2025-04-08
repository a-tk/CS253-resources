CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: strstr

strstr: main.o
	$(CC) $(CFLAGS) $^ -o $@ 

clean:
	rm -f *.o *.d a.out strstr
