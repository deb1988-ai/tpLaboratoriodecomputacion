#include"funciones.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
using namespace std;

void linea()
{
    cout << "---------------------" << endl;
}

void uno ()
{
    cout << "+-------+" << endl;
    cout << "|       |" << endl;
    cout << "|   x   |" << endl;
    cout << "|       |" << endl;
    cout << "+-------+" << endl;
}

void dos()
{
    cout << "+-------+" << endl;
    cout << "|   x   |" << endl;
    cout << "|       |" << endl;
    cout << "|   x   |" << endl;
    cout << "+-------+" << endl;
}

void tres()
{
    cout << "+-------+" << endl;
    cout << "|x      |" << endl;
    cout << "|   x   |" << endl;
    cout << "|     x |" << endl;
    cout << "+-------+" << endl;
}

void cuatro()
{
    cout << "+-------+" << endl;
    cout << "| x   x |" << endl;
    cout << "|       |" << endl;
    cout << "| x   x |" << endl;
    cout << "+-------+" << endl;
}

void cinco()
{
    cout << "+-------+" << endl;
    cout << "| x   x |" << endl;
    cout << "|   x   |" << endl;
    cout << "| x   x |" << endl;
    cout << "+-------+" << endl;
}

void seis()
{
    cout << "+-------+" << endl;
    cout << "| x x x |" << endl;
    cout << "|       |" << endl;
    cout << "| x x x |" << endl;
    cout << "+-------+" << endl;
}

void continuar()
{
    char c;
    /*  do
      {*/
    cout << "Contniuar (S/N): ";
    cin >> c;

}
/*  while (c!= 'S' || c!= 'N');
  if (c == 'N')
  {
      rlutil::cls();
      cout << "Hasta luego :)";
  }*/

void menuPrincipal()
{
    cout << "GRAN CERDO" << endl;
    linea();
    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CERDITOS" << endl;
    linea();
    cout << "0 - SALIR" << endl;
    cout << "Opcion: ";

}

void menuJuego()
{
    string jugador1, jugador2;
    int lanzamiento, ronda;
    ingresarJugadores();
    cin >> jugador1;
    ingresarJugadores();
    cin >> jugador2;
    lanzar2dados();
    lanzar2dados();
    continuar();
    rlutil::cls();
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    rlutil::locate(0,3);
    cout << jugador1 << ":" << "total "<< "trufas acumuladas";
    rlutil::locate(34,3);
    cout << jugador2 << ":" << "total " << "trufas acumuladas";
    cout << endl;
    cout << "TURNO DE " << endl;
    cout << "+-------------------------+" << endl;
    cout << "| RONDAS #" << ronda << "              |" << endl;
    cout << "| TRUFAS DE LA RONDA: 13  |" << endl;
    cout << "| LANZAMIENTOS: 3         |" << endl;
    cout << "+-------------------------+" << endl << endl;

    cout << "LANZAMIENTO #" << lanzamiento << endl << endl;

}

void pantallaFinal()
{
    string jugador1, jugador2, ganador;
    string oink;
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl << endl;
    cout << "HITO";
    rlutil::locate(24,4);
    cout << jugador1;
    rlutil::locate(50,4);
    cout << jugador2 << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    cout << "Mas trufas en total" << endl;
    cout << "Cada 50 trufas" << endl;
    cout << "Oinks" << endl;
    cout << "Cerdo codicioso" << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    cout << "TOTAL";
    cout << endl;
    cout << "GANADOR: " << ganador << "con " << "total" << "puntos de victoria." << endl;
    cout << endl;
    cout << "Ingrese Oink para continuar:";
    cin >> oink;
}

void creditos()
{
    cout << "DANIEL BERMAN, LEGAJO: 26198" << endl;
    cout << "FACUNDO GUTIERREZ, LEGAJO: 26239" << endl;
    cout << "JESICA IBAÑEZ, LEGAJO: 25509" << endl;
}

void ingresarJugadores()
{
    cout << "Ingresar nombre de jugador: ";
}


void suma2Dados(int a, int b, int &suma2Dados)
{
    suma2Dados = a + b;
}

void suma3Dados(int a, int b, int c, int &suma3Dados)
{
    suma3Dados = a + b + c;
}

/* void asignacionJugadores(string &jugador1, string &jugador2, int dado[])
{
    string jugadores[2];
    int mayor1, mayor2;
    int suma2Dados1, suma2Dados2;
    int sumaDados1, sumaDados2;
    ingresarJugadores();
    cin >> jugadores[0];
    ingresarJugadores();
    cin >> jugadores[1];
    lanzar2dados();
    cout << dado[0] << dado[1];
    suma2Dados (dado[0], dado[1], suma2Dados1);
    if (dado[0]>=dado[1])
    {
        mayor1=dado[0];
    }
    else
    {
        mayor1=dado[2];
    }
    cout << mayor1;
    lanzar2dados();
    cout << dado[0] << dado[1];
    suma2Dados (dado[0], dado[1], suma2Dados1);
    if (dado[0]>=dado[1])
    {
        mayor2=dado[0];
    }
    else
    {
        mayor2=dado[2];
    }
    cout << mayor2;

    if (sumaDados1>sumaDados2)
    {
        jugador1=jugadores[0];
        jugador2=jugadores[1];

    }
    else if (sumaDados1<sumaDados2)
    {
        jugador1=jugadores[1];
        jugador2=jugadores[0];
    }
    else if (mayor1 > mayor2)
    {
        jugador1=jugadores[0];
        jugador2=jugadores[1];
    }
    else
    {
        jugador1=jugadores[1];
        jugador2=jugadores[0];
    }
} */

void seguirLanzando()
{
    char opcion;
    do
    {
        cout << "¿Continuar? (S/N)";
        cin >> opcion;

    }
    while (opcion!= 'S' || opcion!= 'N');
}

void lanzar2dados()
{
    int i, dado[i];
    for (i=0; i<=1; i++)
    {
        dado[i] = rand()%6 + 1;
        switch (dado[i])
        {
        case 1:
            uno();
            break;
        case 2:
            dos();
            break;
        case 3:
            tres();
            break;
        case 4:
            cuatro();
            break;
        case 5:
            cinco();
            break;
        case 6:
            seis();
            break;
        }
    }
}

void lanzar3dados()
{
    int i, dado[i];
    for (i=0; i<=2; i++)
    {
        dado[i] = rand()%6 + 1;
        switch (dado[i])
        {
        case 1:
            uno();
            break;
        case 2:
            dos();
            break;
        case 3:
            tres();
            break;
        case 4:
            cuatro();
            break;
        case 5:
            cinco();
            break;
        case 6:
            seis();
            break;
        }
    }
}

void puntaje(int dado1,int dado2, int &acumjugador)
{
    if (dado1!=dado2 && dado1!=1 && dado2!=1)
    {
        acumjugador+=(dado1+dado2);
    }
    else if (dado1==dado2 && dado1 !=1 && dado2!=1)
    {
        acumjugador+= 2*(dado1+dado2);
    }
    else if (dado1!=dado2 && (dado1==1 || dado2==1))
    {

    }
    else if (dado1==dado2 && dado1==1)
    {
        acumjugador = 0;
    }
}

void puntaje3dados(int dado1,int dado2, int &acumjugador)
{
    if (dado1!=dado2 && dado1!=1 && dado2!=1)
    {
        acumjugador+=(dado1+dado2);
    }
    else if (dado1==dado2 && dado1 !=1 && dado2!=1)
    {
        acumjugador+= 2*(dado1+dado2);
    }
    else if (dado1!=dado2 && (dado1==1 || dado2==1))
    {

    }
    else if (dado1==dado2 && dado1==1)
    {
        acumjugador = 0;
    }
}


void seleccionJugador()
{
    int puntajeJugador1, puntajeJugador2, dadoMasAltoJ1, dadoMasAltoJ2;
}


