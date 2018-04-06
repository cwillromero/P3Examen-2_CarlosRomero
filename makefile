RUN: main.o Puntero.o Pila.o
	g++ main.o Puntero.o Pila.o -o RUN

main.o: main.cpp Puntero.cpp Pila.cpp
	g++ -c main.cpp 

Puntero.o: Puntero.h Puntero.cpp
	g++ -c Puntero.cpp

Pila.o: Pila.h Pila.cpp Puntero.h
	g++ -c Pila.cpp
