all: hello

hello: main.o util.o
	g++ main.o util.o -o hello

main.o: main.c
	g++ -c main.c

util.o: util.c
	g++ -c util.c

clean:
	rm -rf *o hello


