CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LIBS = -lraylib
SRC = source/main.c source/app.c source/config.c source/array.c source/renderer.c source/sort.c
OUT = build/sorter

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p build
	$(CC) $(SRC) $(CFLAGS) $(LIBS) -o $(OUT)

run: $(OUTMake)
	./$(OUT)

clean:
	rm -rf build/*
