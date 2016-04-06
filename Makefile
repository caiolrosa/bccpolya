CC = gcc
OBJS = main

all:
	$(CC) main.c -o main

clean:
	rm -rf $(OBJS)