CC = gcc
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

.PHONY: build test clean


build: bank

# the use of variables helps keep things very clean
# definitions for CC and CFLAGS are above
# $^ is an automatic variable for all the dependencies
# $@ is an automatic variable for the name of the target
bank: account.o bank.o
	$(CC) $(CFLAGS) $^ -o $@

# make uses an implicit rule to generate the object file. 


test:
	./bank

clean:
	rm -f *.o *.d a.out bank