CXX = g++
CXXFLAGS = -g -Wno-write-strings
LDFLAGS = -g

PACKAGES = sdl2
CXXFLAGS += `pkg-config --cflags $(PACKAGES)`
LDFLAGS  += `pkg-config --libs $(PACKAGES)`

SOURCES = $(wildcard *.cpp) $(wildcard Magiengine/*.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

all: test

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $?

test: $(OBJECTS)
	$(CXX) -o $@ $? $(LDFLAGS)

clean:
	rm -fv test $(OBJECTS)

.PHONY: all clean
