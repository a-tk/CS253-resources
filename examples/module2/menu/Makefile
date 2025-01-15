CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99

.PHONY: build test clean

build: menu

menu: menu.o
	$(CC) $(CFLAGS) $^ -o $@


clean:
	rm -f *.o *.d *.s a.out menu