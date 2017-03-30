competition: competition.o
	g++ -o competition competition.o
competition.o: competition.cpp
	g++ -c competition.cpp
clock: clock.o main.o
	g++ -o clock clock.o main.o
clock.o: clock.cpp clock.h
	g++ -c clock.cpp
main.o: main.cpp clock.h
	g++ -c main.cpp
clean:
	rm clock competition *.o
