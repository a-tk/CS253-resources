CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: mycat

mycat: main.o
	$(CC) $(CFLAGS) $^ -o $@ 

memtest: myls
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./mycat  -d /home/student

clean:
	rm -f *.o *.d a.out mycat mytests main
