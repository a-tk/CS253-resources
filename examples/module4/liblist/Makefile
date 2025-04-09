CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g -D_GNU_SOURCE

LISTDIR = list
LIBDIR = lib
INCLUDES = include

OBJECTS = SimpleTest.o Job.o

.PHONY: build test clean

build: SimpleTest

SimpleTest: $(INCLUDES)/SinglyLinkedList.h $(OBJECTS) $(LIBDIR)/libSinglyLinkedList.so 
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ -I$(INCLUDES) -L$(LIBDIR) -lSinglyLinkedList

SimpleTest.o: SimpleTest.c
	$(CC) $(CFLAGS) -I$(INCLUDES) $^ -c -o $@

$(LIBDIR)/libSinglyLinkedList.so:
	cd $(LISTDIR) ; make
	mkdir -p $(LIBDIR)
	cp -f $(LISTDIR)/libSinglyLinkedList.so $(LIBDIR)

$(INCLUDES)/SinglyLinkedList.h: 
	mkdir -p $(INCLUDES)
	cp -f $(LISTDIR)/SinglyLinkedList.h $(INCLUDES)

test:
	./SimpleTest

clean:
	rm -f *.o *.d a.out SimpleTest
	rm -rf $(INCLUDES)
	rm -rf $(LIBDIR)
	cd $(LISTDIR) ; make clean
