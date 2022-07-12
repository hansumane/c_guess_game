SRC=main.c true_random.c
DEPS=main.c true_random.c true_random.h
BIN=out-main
CC=gcc
FLAG=-Wno-unused-result -std=c99 -Os

$(BIN): $(DEPS)
	$(CC) $(FLAG) $(SRC) -o $@

clear:
	rm -f $(BIN)
