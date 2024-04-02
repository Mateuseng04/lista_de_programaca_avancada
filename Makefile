CC = gcc
CFLAGS = -Wall
all: questao8
your_program_name: questao8.c
	$(CC) $(CFLAGS) -o questao8 questao8.c
clean:
	rm -f questao8.exe