# Setup a variable to reference the desired compiler
CC = gcc

# Setup a variable to hold desired compiler flags
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -std=c99 -g

# Declaring the build, test and clean rules as phony means that no artifact
#   is created by these rules with a cooresponding name.  Therefore, the
#   rule should run when executed.
.PHONY: build test clean

# The build rule depends upon the hello-world artifact existing.  If it does not, make
#   will look for a rule to create it.
build: hello

# the use of variables helps keep things very clean
# definitions for CC and CFLAGS are above
# $^ is an automatic variable for all the dependencies
# $@ is an automatic variable for the name of the target
hello: hello.o 
	$(CC) $(CFLAGS) $^ -o $@

# make uses an implicit rule to generate the object file. 


test: hello
	./hello

clean:
	rm -f *.o *.d a.out hello cp1 cp2 wc1 wc2