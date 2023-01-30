output: main.o utils.o
	g++ main.o utils.o -o output

main.o: main.cpp
	g++ -c main.cpp

utils.o: utils.cpp
	g++ -c utils.cpp

clean:
	rm *.o output