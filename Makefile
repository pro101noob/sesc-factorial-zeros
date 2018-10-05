run: 1-c

	./1-c
1-c: 1-c.c
	gcc -Wall -std=c11 1-c.c -o 1-c
build: 1-c