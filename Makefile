FILE_c := $(wildcard *.c)
FILE_o := $(wildcard *.o)
CC = gcc

all: $(FILE_c) $(FILE_o)
	$(CC) -o perimeter $(FILE_c) $(FILE_o)

$(FILE_o): $(FILE_c)
	$(CC) -c $(FILE_c)

test: test.c perimeter.c
	$(CC) -o test $^

clean:
	rm -rf *.o perimeter test
