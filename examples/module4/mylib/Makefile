CC=gcc
LINK=ld
CFLAGS=-Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

all: test

test: test.o libmylib.so
	$(CC) $(CFLAGS) $^ -o $@ -I. -L. -lmylib

test.o: test.c
	$(CC) $(CFLAGS) -I. $^ -c -o $@

libmylib.so: f1.o f2.o f3.o
	$(LINK) -fPIC -shared $^ -o libmylib.so

f1.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f1.o f1.c

f2.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f2.o f2.c

f3.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f3.o f3.c


clean:
	/bin/rm -f *.o a.out *.d test
	/bin/rm -f  libmylib.so