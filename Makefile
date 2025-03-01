CC = gcc
CFLAGS = -Wall -Werror -std=c99 -Iinclude

all: test-grid

test-grid: src/grid.o tests/test-grid.o
	$(CC) $(CFLAGS) -o test-grid src/grid.o tests/test-grid.o

src/grid.o: src/grid.c include/grid.h
	$(CC) $(CFLAGS) -c src/grid.c -o src/grid.o

tests/test-grid.o: tests/test-grid.c include/grid.h
	$(CC) $(CFLAGS) -c tests/test-grid.c -o tests/test-grid.o

test-loader: src/grid.o src/loader.o tests/test-loader.o
	$(CC) $(CFLAGS) -o test-loader src/grid.o src/loader.o tests/test-loader.o

src/loader.o: src/loader.c include/loader.h include/grid.h
	$(CC) $(CFLAGS) -c src/loader.c -o src/loader.o

tests/test-loader.o: tests/test-loader.c include/loader.h include/grid.h
	$(CC) $(CFLAGS) -c tests/test-loader.c -o tests/test-loader.o

clean:
	rm -f src/*.o tests/*.o test-grid
