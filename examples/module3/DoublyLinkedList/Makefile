CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g -D_GNU_SOURCE
LFLAGS =

.PHONY = all clean test-all

PROGS=simple-test RandomTestList
OBJECTS=List.o

all: $(PROGS)

simple-test: simple-test.o $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)


RandomTestList: RandomTestList.o $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

clean:
	/bin/rm -f $(PROGS) *.o a.out *.d simple-test

