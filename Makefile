CC=gcc
FLAGS=-Wall -pedantic -ansi
ALLDEPS=Approximations.o
LIBS=-lm
TARGET=midpoint

all:	midpoint.c $(ALLDEPS) $(LIBS)
	$(CC) $(FLAGS) $^ -o $(TARGET)

%.o:	%.c
	$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm *.o
	rm $(TARGET)