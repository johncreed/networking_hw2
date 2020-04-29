CXX = gcc
CXXFLAGS = -Wall -std=gnu11
CXXFLAGS2 = -std=gnu11 

all: r08922195

r08922195: r08922195.c 
	$(CXX) $(CXXFLAGS2) -o $@ $^

clean: 
	rm -f r08922195 
