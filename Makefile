CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude -std=c++17

SRC = $(wildcard src/*.cpp)
OUT = output

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

testing:
	$(CXX)  main.cpp -o test
	./test

clean:
	rm -f $(OUT) test