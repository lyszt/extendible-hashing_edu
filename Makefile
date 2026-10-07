CC = cc
CFLAGS = -Wall -Wextra -std=c11 -Isrc

SRC = $(shell find src -name '*.c')
BIN = main

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(BIN)

.PHONY: clean
