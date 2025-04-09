CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g
LINK = ld

.PHONY: build clean

build: libSinglyLinkedList.so

libSinglyLinkedList.so: SinglyLinkedList.o
	$(LINK) -fPIC -shared $^ -o $@

SinglyLinkedList.o: SinglyLinkedList.c
	$(CC) $(CFLAGS) -I. -fPIC -shared -c $^ -o $@

clean:
	rm -f *.o *.d a.out libSinglyLinkedList.so
