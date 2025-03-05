CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY:

job1: job1.o
	$(CC) $(CFLAGS) $^ -o $@

point: point.o
	$(CC) $(CFLAGS) -lm $^ -o $@
point2: point2.o
	$(CC) $(CFLAGS) -lm $^ -o $@
point3: point3.o
	$(CC) $(CFLAGS) -lm $^ -o $@

clean:
	rm -f *.o *.d *.s a.out point point2 point3 job1