#include <iostream>


//headers
#include "classes/headers/Jugador.h"
#include "classes/headers/Partida.h"

//datatypes
#include "datatypes/headers/DtJugador.h"
#include "datatypes/headers/DtPartida.h"
#include "datatypes/headers/DtFechaHora.h"

int cantJugadores = 0;
const int MAX_JUGADORES = 10;

Jugador **jugadores = new Jugador *[MAX_JUGADORES];
bool obtenerJugadorPorNickname(string nickname);
void agregarJugador(string nickname, int edad, string pass);
void mostrarJugadores(int &cantJugadores);
DtJugador** obtenerJugadores(int &cantJugadores);



using namespace std;

int main(){
    
    int comando = 0;

    

    while (comando != 7 || comando == 0)
    {
    std::cout << "Elija una opción.\n" << endl;
    std::cout << "1) Agregar Jugador.\n" << endl;
    std::cout << "2) Agregar Videojuego.\n" << endl;
    std::cout << "3) Obtener Jugadores.\n" << endl;
    std::cout << "4) Obtener Videojuegos.\n" << endl;
    std::cout << "5) Obtener Partidas.\n" << endl;
    std::cout << "6) Iniciar Partida.\n" << endl;
    std::cout << "7) Salir." << endl;

    cin >> comando;

        if(comando == 1){
           
           
           string pass,nickname;
           int edad;
         string res;
            std::cout << "Vamos a crar un nuevo jugador:\n" << endl;

            
           
            
            do 
            {
               

                std::cout << "Nickname: \n";
                cin >> nickname;

                std::cout << "Edad \n";
                cin >> edad;

                std::cout << "Contrasenia: \n";
                cin >> pass;

                agregarJugador(nickname,edad,pass);

                 std::cout << "Desea agregar otro jugador ? SI/NO" << endl;
                 cin >> res;
            }
            while ((res == "SI" || res == "si"));
            
            
            
            comando = 0;  //salgo al menu principal    
            
               


        }

        if(comando == 2){
            std::cout << "Agregar Videojuegos a desarrollar...";
              

        }

        if(comando == 3){   

            int cantJugadores;
            
            cout << "Ingresar la cantidad de jugadores a mostrar. Maximo 10" << endl;
            cin >> cantJugadores;

            DtJugador **dtJugadores = new DtJugador*[cantJugadores];
            dtJugadores = obtenerJugadores(cantJugadores);
            //obtenerJugadores(cantJugadores);
            //mostrarJugadores(cantJugadores);        
            for (int i = 0 ; i < cantJugadores ; i++){
                cout << "Nickname: " << dtJugadores[i]->getNickname() << endl;
            }
            
        }

        if(comando == 4){
            std::cout << "Obtener Videojuego a desarrollar...";            
        }

        if(comando == 5){
            std::cout << "Obtener Partidas. a desarrollar...";  
        }

        if (comando == 6){
            std::cout << "Iniciar Partida a desarrollar";
        }

        if (comando == 7){
            std::cout << "Saliste....";
        }
         system("pause");
    }

   

   
    
    return 0;

}

DtJugador** obtenerJugadores(int &cantJugadores){  
   
   std::cout << "Entramos en OBTENER Jugadores" << endl;
   /*
    for (int i = 0; i < cantJugadores ; i++){
        std::cout << "Nickname: " << jugadores[i]->getNickname() << " Edad: " << jugadores[i]->getEdad() << endl;
    }

   */

 // creamos el arreglo de Dt Jugadores que vamos a retornar
    //DtJugador** jugadores = new DtJugador *[cantJugadores];
    DtJugador **Dtjugadores = new DtJugador*[cantJugadores];
    
    //un for con la cantidad de jugadores a devolver
    
    //cargo los valores en el dt
    for (int i = 0; i < cantJugadores ; i++){
        Dtjugadores[i]->setNickname(jugadores[i]->getNickname());
        Dtjugadores[i]->setEdad(jugadores[i]->getEdad());
    }
        //muestro los valores
    /*std::cout << "Mostramos Jugadores" << endl;
    for (int i = 0; i < cantJugadores ; i++){
        std::cout << "Nickname: " << Dtjugadores[i]->getNickname() << " Edad: " << Dtjugadores[i]->getEdad() << endl;
    }*/


    return Dtjugadores; 
} 




void agregarJugador(string nickname, int edad, string pass){

    
    
    bool existeJugador = obtenerJugadorPorNickname(nickname);
    

    if(existeJugador){
                
                
        throw std::invalid_argument("El Jugador ya existe.");       
                
    }  
     
    if(existeJugador == false)
    {                      
        
         Jugador *jugador = new Jugador(nickname,edad,pass);
         jugadores[cantJugadores] = jugador;
         cantJugadores++;
         
    }      
    

}

void mostrarJugadores(int &cantJugadores){
    
    
    
    for (int i = 0; i < cantJugadores ; i++){
        std::cout << "Nickname: " << jugadores[i]->getNickname() << " Edad: " << jugadores[i]->getEdad() << endl;
    }

   
}

bool obtenerJugadorPorNickname(string nickname){
    
    for(int i = 0; i < cantJugadores; i++)
    {
        if(jugadores[i]->getNickname() == nickname){
            return true;
        }
    }
    return false;
}


