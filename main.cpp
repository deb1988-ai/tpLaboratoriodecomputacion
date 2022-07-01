#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
#include <string>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    srand (time (NULL));
    int opcion;
    int acumJugador[2] = {0,0};
    int puntajeJugador = 0;
    string ganador;
    string jugador[2];

    do
    {
        rlutil::cls();
        menuPrincipal();
        cin >> opcion;
        switch(opcion)
        {
        case 0:
            rlutil::cls();
            menuSalida(opcion);
            break;
        case 1:
            rlutil::cls();
            juego(acumJugador[0], acumJugador[1], jugador[0], jugador[1], puntajeJugador, ganador);
            rlutil::cls();
            break;
        case 2:
            if (acumJugador[0] == 0 && acumJugador[1] == 0)
            {
                rlutil::cls();
                cout << "No se ha jugado ninguna partida" << endl << endl;
                system("Pause");
                rlutil::cls();
            }
            else
            {
                if (acumJugador[0] > acumJugador[1])
                {
                    ganador = jugador[0];
                    if (acumJugador[0] > puntajeJugador)
                    {
                        puntajeJugador = acumJugador[0];
                    }
                    else{

                    }
                    }
                else
                {
                    ganador = jugador[1];
                    if (acumJugador[1] > puntajeJugador)
                    {
                        puntajeJugador = acumJugador[1];
                    }
                    else{}
                    }
                rlutil::cls();
                estadisticas(ganador, puntajeJugador);
                system("Pause");
                opcion = 4;
            }
            break;
        case 3:
            rlutil::cls();
            creditos();
            break;
        }
    }
    while (opcion != 0 );

    return 0;
}
