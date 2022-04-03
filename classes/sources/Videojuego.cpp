#include "../headers/Videojuego.h"

Videojuego::Videojuego(string nombre,TipoJuego tipoJuego){
    this->nombre = nombre;
    this->tipoJuego = tipoJuego;
    this->partidas = new Partida*[MAX_PARTIDAS];
}