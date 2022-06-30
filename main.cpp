#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
#include <string>

using namespace std;
#include "funciones.h"
int main()
{
    setlocale(LC_ALL, "spanish");
    int opcion;
    int acumJugador1=0, acumJugador2=0;
    int puntajeJugador1, puntajeJugador2, dadoMasAltoJ1, dadoMasAltoJ2;
    int dado[2], tresDados[3], suma2Dados, suma3Dados;
    int ganador;
    string jugador1, jugador2;
    srand (time (NULL));
    do
    {
        menuPrincipal();
        cin >> opcion;
        switch(opcion)
        {
        case 0:
            rlutil::cls();
            menuSalida();
            break;
        case 1:
            rlutil::cls();
            juego(acumJugador1, acumJugador2);
            continuar();
            rlutil::cls();
            break;
        case 2:
            if (acumJugador1==0 && acumJugador2==0)
            {
                rlutil::cls();
                cout << "No se ha jugado ninguna partida"<< endl;
                system("Pause");
                rlutil::cls();
            }
            else
            {
                estadisticas();
            }
            break;
        case 3:
            rlutil::cls();
            creditos();
            break;
        }
    }
    while (opcion !=0);

    return 0;
}
