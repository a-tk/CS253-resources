CC=gcc
LINK=ld
CFLAGS=-Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

all: test

test: test.o
	$(CC) $(CFLAGS) $^ -o $@ -I. -L. -lmylib

# try without this first. -I. is default?
# test.o: test.c libf.so
# 	$(CC) $(CFLAGS) -I. $^ -c -o $@

libmylib.so: f1.o f2.o f3.o
	$(LINK) -fPIC -shared $^ -o libmylib.so
-include *.d

f1.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f1.o f1.c

f2.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f2.o f2.c

f3.o:
	$(CC) $(CFLAGS) -I. -fPIC -shared -c -o f3.o f3.c


clean:
	/bin/rm -f *.o a.out *.d test
	/bin/rm -f  libmylib.so