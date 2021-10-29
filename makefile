all: listnode.cpp listnode.h
	g++ -c listnode.cpp -o listnode.o
	g++ -shared -o liblistnode.so listnode.o

clean:
	rm listnode.o liblistnode.so
