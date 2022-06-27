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
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    cout << jugador1 << ":" << "total "<< "trufas acumuladas";
    cout << jugador2 << ":" << "total " << "trufas acumuladas";
    cout << endl;
}

void pantallaFinal()
{
    string jugador1, jugador2, ganador;
    string oink;
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl << endl;
    cout << "HITO";
    cout << jugador1;
    cout << jugador2;
    cout << "------------------------------------------------------------------------: " << endl;
    cout << "Mas trufas en total";
    cout << "Cada 50 trufas";
    cout << "Oinks";
    cout << "Cerdo codicioso";
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
    char continuar
    cout << "Desea seguir lanzando (S/N): ";
    cin >> continuar;
}

void lanzar2dados()
{
    int i, dado[i];
    for (i=0; i<=1; i++){
        dado[i] = rand()%6 + 1;
    }
}

void puntaje(int dado1,int dado2)
{
    int *acumjugador1;
    void lanzar2dados();
    if(dado1!=dado2 && dado1!=1 && dado2!=1)
    {
        acumjugador1+=(dado1+dado2);
    }
    else if (dado1==dado2 && dado1 !=1 && dado2!=1)
    {
        acumjugador1+= 2*(dado1+dado2);
    }
    else if (dado1!=dado2 && (dado1==1 || dado2==1))
    {

    }
    else if (dado1==dado2 && dado1==1)
    {
        acumjugador1 = 0;
    }
}


void seleccionJugador()
{
    int puntajeJugador1, puntajeJugador2, dadoMasAltoJ1, dadoMasAltoJ2;
}


void uno (){
cout << "+-------+" << endl;
cout << "|       |" << endl;
cout << "|   x   |" << endl;
cout << "|       |" << endl;
cout << "+-------+" << endl;
}

void dos(){
cout << "+-------+" << endl;
cout << "|   x   |" << endl;
cout << "|       |" << endl;
cout << "|   x   |" << endl;
cout << "+-------+" << endl;
}

void tres(){
cout << "+-------+" << endl;
cout << "|x      |" << endl;
cout << "|   x   |" << endl;
cout << "|     x |" << endl;
cout << "+-------+" << endl;
}

void cuatro(){
cout << "+-------+" << endl;
cout << "| x   x |" << endl;
cout << "|       |" << endl;
cout << "| x   x |" << endl;
cout << "+-------+" << endl;
}

void cinco(){
cout << "+-------+" << endl;
cout << "| x   x |" << endl;
cout << "|   x   |" << endl;
cout << "| x   x |" << endl;
cout << "+-------+" << endl;
}

void seis(){
cout << "+-------+" << endl;
cout << "| x x x |" << endl;
cout << "|       |" << endl;
cout << "| x x x |" << endl;
cout << "+-------+" << endl;
}
