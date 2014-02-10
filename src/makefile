CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c util.c foo.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *o hello
	rm -rf *~


