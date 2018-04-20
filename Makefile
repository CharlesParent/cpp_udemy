CXX= g++
CPPFLAGS= -Wall -Werror -g -O2 -std=c++11
LDLIBS= -lm

EXE= bin/project
OBJS= build/main.o

build/%.o : src/%.cpp
	$(CXX) $(CPPFLAGS) -c $^ -o $@

$(EXE): $(OBJS)
	$(CXX)  $^ $(LOADLIBES) $(LDLIBS) -o $@

start:
	make
	./bin/project

clean:
	rm -f build/*
	rm -f bin/*
