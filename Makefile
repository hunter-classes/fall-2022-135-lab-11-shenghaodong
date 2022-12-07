CXXFLAGS = -std=c++11

main: main.o network.o profile.o
	g++ -o main main.o network.o profile.o

tests: tests.o network.o profile.o
	g++ -o tests tests.o network.o profile.o


network.o: network.cpp network.h profile.h

profile.o: profile.cpp profile.h

main.o: main.cpp network.h profile.h

tests.o: tests.cpp doctest.h network.h profile.h

clean:
	rm -f main.o network.o tests.o profile.o