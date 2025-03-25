
CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build test clean

build: vararg Vararg.class

vararg: vararg.o
	$(CC) $(CFLAGS) $^ -o $@

Vararg.class: Vararg.java
	javac Vararg.java


clean:
	rm -f *.o *.d *.class a.out vararg
