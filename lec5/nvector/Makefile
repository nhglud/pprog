CFLAGS = -Wall
LIBS = -lm

.PHONEY: all
all: out.txt erros.txt
	cat out.txt erros.txt


out.txt: nvec
	./nvec 1> out.txt 2> erros.txt
	
nvec: main.o nvector.o
	cc main.o nvector.o -o nvec
	
nvec.o: main.c nvector.c
	cc $(CFLAGS) main.c nvector.c -o nvec.o -lm
	
.PHONEY: clean
clean:
	rm -f nvec.o nvec

	
