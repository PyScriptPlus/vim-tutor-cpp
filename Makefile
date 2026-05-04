CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -static -g

all: 01-basic-commands 02-editing-and-buffers

01-basic-commands: 01-basic-commands.cpp
	$(CXX) $(CXXFLAGS) -o 01-basic-commands 01-basic-commands.cpp

02-editing-and-buffers: 02-editing-and-buffers.cpp
	$(CXX) $(CXXFLAGS) -o 02-editing-and-buffers 02-editing-and-buffers.cpp

run1: 01-basic-commands
	./01-basic-commands

run2: 02-editing-and-buffers
	./02-editing-and-buffers

clean:
	rm -f 01-basic-commands 02-editing-and-buffers

.PHONY: all run1 run2 clean
