SRC=src/main.c src/true_random.c
DEPS=src/main.c src/true_random.c src/true_random.h
BIN=guess_game
CC=gcc
FLAG=-Wno-unused-result -std=gnu99 -Os

$(BIN): $(DEPS)
	$(CC) $(SRC) $(FLAG) -o $@

clear:
	rm -f $(BIN)
