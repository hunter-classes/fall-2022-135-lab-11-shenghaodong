CXXFLAGS = -std=c++11

main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o



funcs.o: network.cpp network.h profile.cpp profile.h

main.o: main.cpp funcs.h profile.h network.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
