CXX=g++
CXXFLAGS=-std=c++17 -Wall -I.
OBJS=ulamek.o main.o

pong: ulamek.o main.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o main.exe

.PHONY: clean

clean:
	del *.o
