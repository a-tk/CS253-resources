# Setup a variable to reference the desired compiler
CC = gcc

# Setup a variable to hold desired compiler flags
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

# Declaring the build, test and clean rules as phony means that no artifact
#   is created by these rules with a corresponding name.  Therefore, the
#   rule should run when executed.
.PHONY: build test clean

# The build rule depends upon the endian artifact existing.  If it does not, make
#   will look for a rule to create it.
build: endian

endian: endian.o 
	$(CC) $(CFLAGS) $^ -o $@

test: endian
	./test.sh

clean:
	rm -f *.o *.d a.out endian myresults.diff myresults.out
