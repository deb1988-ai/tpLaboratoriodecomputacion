#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"


using namespace std;
#include "funciones.h"
int main()
{
    setlocale(LC_ALL, "spanish");
    int opcion;
    int acumJugador1, acumJugador2;
    int acumJudaro1ronda, acumJugador2ronda;
    int puntajeJugador1, puntajeJugador2, dadoMasAltoJ1, dadoMasAltoJ2;
    int dado[2], tresDados[3], suma2Dados, suma3Dados;
    int ganador;
    string jugador1, jugador2;
    do
    {
        menuPrincipal();
        cin >> opcion;
        switch(opcion)
        {
        case 0:
            rlutil::cls();
            cout << "Hasta luego :)" << endl << endl << endl;
            break;
        case 1:
            rlutil::cls();
            menuJuego();
            continuar();
            rlutil::cls();
            pantallaFinal();
            rlutil::cls();
            break;
        case 2:
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
