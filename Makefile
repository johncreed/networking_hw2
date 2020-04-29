CXX = gcc
CXXFLAGS = -Wall -std=gnu11
CXXFLAGS2 = -std=gnu11 

LIB = -lm 

all: r08922195

r08922195: r08922195.c queue.o
	$(CXX) $(CXXFLAGS2) -o $@ $^ $(LIB)

queue.o: queue.c
	$(CXX) $(CXXFLAGS) -c queue.c

clean: 
	rm -f r08922195 queue.o
