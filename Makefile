FLAGS=-std=c++14
a: main.cpp board.o
	g++ $(FLAGS) -o main main.cpp board.o
board.o: board.cpp board.h
	g++ $(FLAGS) -c board.cpp
run:
	./main
clean:
	rm -rf *.o main
