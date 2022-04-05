#include "../headers/DtJugador.h"

DtJugador::DtJugador(string nickname, int edad){
    this->nickname = nickname;
    this->edad = edad;
}

void DtJugador::setNickname(string nickname){
    this->nickname = nickname;
}

void DtJugador::setEdad(int edad){
    this->edad = edad;
}

int DtJugador::getEdad(){
    return this->edad;
    }
string DtJugador::getNickname(){
    return this->nickname;
}

void DtJugador::setCantidadJugadores(){
     this->cantJugadores++;
}
