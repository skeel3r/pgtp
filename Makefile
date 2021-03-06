CC=g++-4.9
CFLAGS=-std=c++11 -g -Wall -O2
LDFLAGS=
SOURCES= main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE= main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c
      
clean:
	$(RM) count *.o *~
