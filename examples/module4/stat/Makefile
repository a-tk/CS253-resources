CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: stat fstat cmp

stat: stat.o
	$(CC) $(CFLAGS) $^ -o $@ 


fstat: fstat.o
	$(CC) $(CFLAGS) $^ -o $@ 

cmp: cmp.o
	$(CC) $(CFLAGS) $^ -o $@ 



clean:
	rm -f *.o *.d a.out fstat stat cmp
