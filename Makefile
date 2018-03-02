#3350 lab6

all: maximillianW

maximillianW: maximillianW.cpp
	g++ maximillianW.cpp libggfonts.a -lrt -lX11 -lGL -Wall -o maximillianW

clean: 
	rm -f maximillianW
	rm -f *.o
