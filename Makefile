CC=gcc
FLAGS=-Wall -pedantic -ansi
ALLDEPS=Approximations.o Recursion.o
LIBS=-lm
BINDIR=bin/
TARGET=$(BINDIR)midpoint

all:	midpoint.c $(ALLDEPS) $(LIBS)
	mkdir $(BINDIR)
	$(CC) $(FLAGS) $^ -o $(TARGET)

%.o:	%.c
	$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm *.o
	rm -rf $(BINDIR)
