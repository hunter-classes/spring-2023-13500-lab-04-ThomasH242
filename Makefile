main: main.o functions.o 
	g++ -o main main.o functions.o 
main.o: main.cpp func.h
	g++ -c main.cpp
functions.o: functions.cpp func.h
	g++ -c functions.cpp
clean:
	rm -f *.o