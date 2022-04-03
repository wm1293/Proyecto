OBJETOS = Jugador.o 

FUENTES = Jugador.cpp

CC = g++

OPCIONES = -std=c++11 -g -Wall -Werror

main: $(OBJETOS) main.cpp Makefile
	$(CC) $(OPCIONES) $(OBJETOS) main.cpp -o main

Jugador.o: ./classes/headers/Jugador.h ./classes/sources/Jugador.cpp
	$(CC) $(OPCIONES) -c ./classes/sources/Jugador.cpp

clean:
	rm -f $(OBJETOS) main