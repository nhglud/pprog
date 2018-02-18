CFLAGS = -Wall 
LDLIBS = -lm
CC = cc

.PHONEY: all
all: test.io.out.txt
	cat test.io.out.txt

test.io.out.txt: main-stdio
	echo 1 2 3 4 5 | ./main-stdio > test.io.out.txt 

main-stdio: main-stdio.o
	$(CC) $(CFLAGS) main-stdio.o - main-stdio $(LDLIBS) -E

main-stdio.o: main-stdio.c
	$(CC) $(CFLAGS) main-stdio.c -o main-stdio.o $(LDLIBS)

.PHONEY: clean
clean: 
	rm main-stdio.o main-stdio