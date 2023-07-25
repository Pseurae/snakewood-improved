CXX = g++

CXXFLAGS = -Wall -std=c++20 -O2

SRCS = makeips.cpp

HEADERS := makeips.h

.PHONY: all clean

all: makeips
	@:

makeips: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) makeips makeips.exe
