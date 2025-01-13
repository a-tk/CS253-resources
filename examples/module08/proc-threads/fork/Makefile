CC = gcc

CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=gnu99 -g

.PHONY: build test clean

build: fork-hello-world fork-and-wait fork-child-grandchild

fork-hello-world: fork-hello-world.o
	$(CC) $(CFLAGS) $^ -o $@


fork-and-wait: fork-and-wait.o
	$(CC) $(CFLAGS) $^ -o $@


fork-child-grandchild: fork-child-grandchild.o
	$(CC) $(CFLAGS) $^ -o $@

# no rule for fork-test.c 

clean:
	rm -f *.o *.d a.out fork-child-grandchild fork-and-wait fork-hello-world fork-test
 