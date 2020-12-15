CC = gcc
CFLAGS = -g -O2

SRC = $(wildcard *.c)
EXE = $(SRC:.c=)

all: $(EXE)

encrypt:%.c $(SRC)
	$(CC) $(CFLAGS) -c $@ $<

clean:
	rm -f $(EXE)

.PHONY: all clean