# cd /c/www/clang/the-c-programming-language && make clean build assembly && time ./bin/1.1-hello

CC := clang -std=c11
CFLAGS := -Wall -g
ASSEMBLY := -S -masm=intel
# Optimization flags: http://stackoverflow.com/a/15548189/1442219
OPTIMIZE := -Ofast

SRC := $(wildcard src/*.c)
BIN := $(patsubst src/%.c,bin/%,$(SRC))
ASS := $(patsubst src/%.c,ass/%,$(SRC))

clean:
	rm -f bin/* ass/*

build: $(BIN)
$(BIN): bin/%: src/%.c
	$(CC) $(CFLAGS) $(OPTIMIZE) $^ -o $@

assembly: $(ASS)
$(ASS): ass/%: src/%.c
	$(CC) $(ASSEMBLY) $(OPTIMIZE) $^ -o $@
