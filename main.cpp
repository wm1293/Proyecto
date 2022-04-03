#include <iostream>


//headers
#include "classes/headers/Jugador.h"
#include "classes/headers/Partida.h"

//datatypes
#include "datatypes/headers/DtJugador.h"
#include "datatypes/headers/DtPartida.h"
#include "datatypes/headers/DtFechaHora.h"

//DtJugador** obtenerJugadores(int &cantJugadores);



using namespace std;

int main(){
    
    int comando; 

    cout << "Elija una opción.\n" << endl;
    std::cout << "1) Agregar Jugador.\n" << endl;
    std::cout << "2) Agregar Videojuego.\n" << endl;
    std::cout << "3) Obtener Jugadores.\n" << endl;
    std::cout << "4) Obtener Videojuegos.\n" << endl;
    std::cout << "5) Obtener Partidas.\n" << endl;
    std::cout << "6) Iniciar Partida.\n" << endl;
    std::cout << "7) Salir." << endl;

    cin >> comando;

    while (comando != 7)
    {
        if(comando == 1){
           //Jugador *j;
           string pass,nick;
           int edad;
            cout << "Vamos a crar un nuevo jugador:\n" << endl;

            cout << "Nickname: \n";
            cin >> nick;

            cout << "Edad \n";
            cin >> edad;

            cout << "Contrasenia: \n";
            cin >> pass;

           
           break;        


        }

        if(comando == 2){
            cout << "Agregar Videojuegos a desarrollar...";
        }

        if(comando == 3){
            cout << "Obtener Jugadores a desarrollar...";
        }

        if(comando == 4){
            cout << "Obtener Videojuego a desarrollar...";            
        }

        if(comando == 5){
            cout << "Obtener Partidas. a desarrollar...";  
        }

        if (comando == 6){
            cout << "Iniciar Partida a desarrollar";
        }

        if (comando == 7){
            cout << "Saliste....";
        }
    }

   
    
    return 0;
}