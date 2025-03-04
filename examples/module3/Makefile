CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g -lm

.PHONY:

job1: job1.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o *.d *.s a.out