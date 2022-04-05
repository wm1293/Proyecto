OBJETOS = Jugador.o DtJugador.o

FUENTES = Jugador.cpp Jugador.h \
DtJugador.h DtJugador.cpp

CC = g++

OPCIONES = -std=c++11 -g -Wall -Werror 

main: $(OBJETOS) main.cpp Makefile
	$(CC) $(OPCIONES) $(OBJETOS) main.cpp -o main

Jugador.o: ./classes/headers/Jugador.h ./classes/sources/Jugador.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Jugador.cpp

DtJugador.o: ./datatypes/headers/DtJugador.h ./datatypes/sources/DtJugador.cpp
	$(CC) $(OPCIONES) -c ./datatypes/sources/DtJugador.cpp
clean:
	rm -f $(OBJETOS) main