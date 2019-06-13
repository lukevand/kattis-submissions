CC = cc
CXX = g++
CFLAGS = -ggdb -Wall -Wshadow -Wextra -Werror -O2 -std=gnu99 -lm
CXXFLAGS = -ggdb -Wall -Wshadow -Wunused -Wextra -Wchkp -Wuseless-cast -Wpedantic -O2 -std=gnu++17
BIN = ./bin

src = $(wildcard *.cpp)
# list = $(foreach word,$(src),

# awkwardparty: awkwardparty.cpp

%: %.cpp
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

foo:
	for i in $(src); do \

