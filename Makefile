CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/app.c
OUT = build/sorter

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) -o $(OUT)

run: $(OUTMake)
	./$(OUT)

clean:
	rm -rf build/*
