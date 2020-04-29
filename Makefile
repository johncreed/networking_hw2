CXX = gcc
CXXFLAGS = -Wall

all: r08922195

r08922195: r08922195.c queue.o
	$(CXX)  -o $@ $^

queue.o: queue.c
	$(CXX) $(CXXFLAGS) -c queue.c

clean: 
	rm -f r08922195 queue.o
