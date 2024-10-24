CXX := g++

CXXFLAGS := -std=c++11 -O2 -Wall -Wno-switch -Werror

SRCS := decap.cpp file.cpp

HEADERS := decap.h file.h

.PHONY: all clean

all: decap
	@:

decap: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) decap decap.exe
