CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build clean

build: pointer-practice

pointer-practice: pointer-practice.o
	$(CC) $(CFLAGS) $^ -o $@


clean: 
	rm -f *.o *.d pointer-practice