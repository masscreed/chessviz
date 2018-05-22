C = gcc
flag = -c -Wall -Werror

all: ./bin/chess ./bin/test

./bin/chess: ./build/src/main.o ./build/src/board_print_plain.o ./build/src/board.o
	gcc ./build/src/main.o ./build/src/board_print_plain.o ./build/src/board.o -o ./bin/chess

./build/src/main.o: ./src/main.c
	gcc $(flag) ./src/main.c -o ./build/src/main.o

./build/src/board_print_plain.o: ./src/board_print_plain.c
	gcc $(flag) ./src/board_print_plain.c -o ./build/src/board_print_plain.o

./build/src/board.o: ./src/board.c
	gcc $(flag) ./src/board.c -o ./build/src/board.o

.PHONY: clean
clean:
	rm -rf ./build/src/*.o