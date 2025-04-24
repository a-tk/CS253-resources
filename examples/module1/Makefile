SOURCES := $(wildcard *.c)
TARGETS := $(SOURCES:.c=)
CFLAGS = -Wall -Wextra -Wpointer-arith -Wstrict-prototypes -g

.PHONY: all clean

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)
	rm -rf *.dSYM
