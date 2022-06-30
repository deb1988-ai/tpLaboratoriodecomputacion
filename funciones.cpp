#include"funciones.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "rlutil.h"
#include <string>
#include <cstring>

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

void imprimirDado(int a){
 switch (a)
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

int suma2Dados(int a, int b, int &suma2Dados)
{
    suma2Dados = a + b;
    return suma2Dados;
}

int suma3Dados(int a, int b, int c, int &suma3Dados)
{
    return a + b + c;
}
void continuar()
{
    char c;
    /*  do
      {*/
    cout << "Continuar (S/N): ";
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
    cout << "0 - SALIR" << endl << endl;
    cout << "Opcion: ";
}

void menuJuego(std::string jugador1,std::string jugador2, std::string turno, int ronda, int lanzamiento)
{
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    rlutil::locate(0,3);
    cout << jugador1 << ": " << "total "<< "trufas acumuladas";
    rlutil::locate(34,3);
    cout << jugador2 << ": " << "total " << "trufas acumuladas";
    cout << endl;
    cout << "TURNO DE " << turno << endl;
    cout << "+-------------------------+" << endl;
    cout << "| RONDAS #" << ronda << "              |" << endl;
    cout << "| TRUFAS DE LA RONDA:   |" << endl;
    cout << "| LANZAMIENTOS:          |" << endl;
    cout << "+-------------------------+" << endl << endl;

    cout << "LANZAMIENTO #" << lanzamiento << endl << endl;
}

int seleccionJugadores(string &jugador1,string &jugador2)
{
    string jugadores[2];
    int lanzamiento, ronda, suma1, suma2, mayor1, mayor2, acum=0, i;
    int dado[2];
    ingresarJugadores();
    cin >> jugadores[0];
    ingresarJugadores();
    cin >> jugadores[1];
    do
    {
        cout << jugadores[0] << endl;
        lanzar2dados(dado[0], dado[1]);
        suma2Dados(dado[0], dado[1], suma1);
        numeromayor(dado[0], dado[1], mayor1);
        cout << jugadores[1] << endl;
        lanzar2dados(dado[0], dado[1]);
        suma2Dados(dado[0], dado[1], suma2);
        numeromayor(dado[0], dado[1], mayor2);
        if (suma1==suma2)
        {
            acum++;
        }
        if (mayor1==mayor2)
        {
            acum++;
        }
    }
    while (acum==2);

    if (suma1>suma2)
    {
        jugador1=jugadores[0];
        jugador2=jugadores[1];
    }
    else if (suma2>suma1)
    {
        jugador2=jugadores[0];
        jugador1=jugadores[1];
    }
    else if (mayor1>mayor2)
    {
        jugador1=jugadores[0];
        jugador2=jugadores[1];
    }
    else
    {
        jugador2=jugadores[0];
        jugador1=jugadores[1];
    }
}

void ronda2dados(std::string jugador1,std::string jugador2, std::string turnoint &acumJugador)
{
menuJuego(std::string jugador1,std::string jugador2, std::string turno, int ronda, int lanzamiento)
    int puntos=0, caso, dado1, dado2;
    char lanzar;
    int acumRonda=0;
    do
    {
        lanzar2dados(dado1, dado2);
        if (dado1!=dado2 && dado1!=1 && dado2!=1)
        {
            acumRonda+=(dado1+dado2);
            caso=0;
            do {
            cout << "Lanzar nuevamente(S/N): ";
            cin >> lanzar;
            } while (lanzar!='S' || lanzar !='N' || lanzar == 's'|| lanzar == 'n');
            if (lanzar == 'N' || lanzar == 'n'){
                caso =2;
            } else {
            caso = 1;
            }
        }
        else if (dado1==dado2 && dado1 !=1 && dado2!=1)
        {
            acumRonda+= 2*(dado1+dado2);
            cout << "Oink!";
            caso=1;
            system("PAUSE");
        }
        else if (dado1!=dado2 && (dado1==1 || dado2==1))
        {
            acumRonda = 0;
            cout << "Cerdo hundido en el barro!";
            caso=2;
        }
        else if (dado1==dado2 && dado1==1)
        {
            acumRonda = 0;
            acumJugador = 0;
            caso=2;
        }
        cout << endl;
        cout << "Trufas ganadas: " << acumRonda;
    }
    while (caso==1);
}

void numeromayor(int a, int b, int &mayor)
{
    if (a>b)
    {
        mayor=a;
    }
    else
    {
        mayor=b;
    }
}

void pantallaFinal(std::string jugador1, std::string jugador2)
{
    string ganador;
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


int lanzarDado()
{
    int dado;
    return dado = (rand() % 6) + 1;
}

void lanzar2dados(int &a, int &b)
{
    a = lanzarDado();
    b = lanzarDado();
    imprimirDado(a);
    imprimirDado(b);
}

void lanzar3dados()
{
    int dado[3];
    dado[0] = lanzarDado();
    dado[1] = lanzarDado();
    dado[2] = lanzarDado();
    imprimirDado(dado[0]);
    imprimirDado(dado[1]);
    imprimirDado(dado[2]);
}

int puntaje(int dado1,int dado2, int &acumjugador, int&acumronda, int &caso)
{
    int suma;
    int acum;
    suma2Dados(dado1, dado2, suma);
    /*if(dado1!=dado2){
        acum++;
    }
    if(dado1!=1){
        acum++;
    }
    if(dado2!=1){
        acum++;
    }
    switch(acum){
    case 0:
    acumronda = 0;
    acumjugador = 0;
    break;
    case 1:

    break;
    case 2:
    acumronda+= 2*(dado1+dado2);
    cout << "Oink!";
    break;

    case 3:
    acumronda+=suma;
    break;
    }*/

    if (dado1!=dado2 && dado1!=1 && dado2!=1)
    {
        acumronda+=(dado1+dado2);
        caso=0;
    }
    else if (dado1==dado2 && dado1 !=1 && dado2!=1)
    {
        acumronda+= 2*(dado1+dado2);
        cout << "Oink!";
        caso=1;
    }
    else if (dado1!=dado2 && (dado1==1 || dado2==1))
    {
        acumronda = 0;
        cout << "Cerdo hundido en el barro!";
        caso=2;
    }
    else if (dado1==dado2 && dado1==1)
    {
        acumronda = 0;
        acumjugador = 0;
        caso=2;
    }
    return caso;
}

void puntaje3dados(int dado1,int dado2, int dado3, int &acumjugador)
{
    if (dado1!=dado2 && (dado1==dado3 || dado2==dado3) && dado1!=1 && dado2!=1 && dado3!=1)
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

void juego(int &acumJugador1, int &acumJugador2)
{
    int lanzamiento=1, ronda=1;
    int dado[2], n1 = 1, n2= 1;
    std::string jugador1, jugador2;
    seleccionJugadores(jugador1, jugador2);
    rlutil::locate(0,21);
    system("PAUSE");
    rlutil::cls();
    menuJuego(jugador1,jugador2, jugador1, ronda, lanzamiento);
    ronda2dados(acumJugador1);
    rlutil::cls();
    ronda2dados(acumJugador2);
    /*pantallaFinal(jugador1,jugador2);*/
}


void estadisticas()
{
    cout << "Jugador con mas PDV: ";
}
