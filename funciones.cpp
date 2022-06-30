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

void lineaCompleta()
{
    cout << "------------------------------------------------------------------------" << endl;

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

void imprimirDado(int a)
{
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

int suma2Dados(int a, int b, int &suma2Dados)
{
    suma2Dados = a + b;
    return suma2Dados;
}

int suma3Dados(int a, int b, int c, int &suma3Dados)
{
    return a + b + c;
}

void menuSalida(){
 char c;
    do
    {
        cout << "Salir (S/N): ";
        cin >> c;
        tolower(c);

    }
    while (c!= 's' && c!= 'n');
    if (c == 'N')
    {
        rlutil::cls();
        cout << "Hasta luego :)";
    }
}

void continuar()
{
    char c;
    do
    {
        cout << "Continuar (S/N): ";
        cin >> c;
        tolower(c);

    }
    while (c!= 's' && c!= 'n');
    if (c == 'N')
    {
        rlutil::cls();
        cout << "Hasta luego :)";
    }
}

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

void menuJuego1(std::string jugador1,std::string jugador2, int &acumJ1ronda1, int &acumJ2onda1)
{
    rlutil::cls();
    cout << "GRAN CERDO" << endl;
    cout << "------------------------------------------------------------------------: " << endl;
    rlutil::locate(0,3);
    cout << jugador1 << ": " << acumJ1ronda1 << " trufas acumuladas";
    rlutil::locate(34,3);
    cout << jugador2 << ": " << acumJ2onda1 <<" trufas acumuladas";
    cout << endl;
}

void menuJuego2(std::string turno, int ronda, int lanzamiento, int lanzamientos, int trufasRonda)
{
    cout << "TURNO DE " << turno << endl;
    cout << "+-------------------------+" << endl;
    cout << "| RONDAS #" << ronda << "              |" << endl;
    cout << "| TRUFAS DE LA RONDA: " << trufasRonda << "  |" << endl;
    cout << "| LANZAMIENTOS:" << lanzamientos << "         |" << endl;
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

void ronda2dados(std::string jugador1,std::string jugador2, int turno, int ronda, int &acumJugador1, int acumJugador2, int &lanzamientos, int &oinks)
{
    int acumJugador;
    int lanzamiento=1;
    int puntos=0, caso, dado1, dado2, suma;
    char lanzar;
    int acumRonda=0,acumRonda1=0, acumRonda2=0;
    string turnoJugador;

    if (turno==1)
    {
        turnoJugador = jugador1;
    }
    else
    {
        turnoJugador = jugador2;
    }

    do
    {
        if (turno==1)
        {
            acumRonda1 = acumRonda;
        }
        else
        {
            acumRonda2 = acumRonda;
        }
        menuJuego1(jugador1, jugador2, acumJugador1, acumJugador2);
        menuJuego2(turnoJugador, ronda, lanzamiento, lanzamientos, acumRonda);
        lanzar2dados(dado1, dado2);
        suma2Dados(dado1, dado2, suma);
        cout << endl;
        if (dado1!=dado2 && dado1!=1 && dado2!=1)
        {
            acumRonda+=suma;
            caso=0;
            cout << "¡Sumaste " << suma << " trufas!" << endl << endl;
            do
            {
                cout << "Continuar (S/N): ";
                cin >> lanzar;
                tolower(lanzar);
            }
            while (lanzar == 's' && lanzar == 'n');
            if (lanzar == 'n')
            {
                caso = 2;
            }
            else
            {
                caso = 1;
                lanzamientos++;
            }
        }
        else if (dado1==dado2 && dado1 !=1)
        {
            acumRonda+= 2*(suma);
            cout << "Oink!"<< endl;
            cout << "¡Sumaste " << 2*(suma) << " trufas!" << endl << endl;
            oinks++;
            caso = 1;
            lanzamientos++;
            system("PAUSE");
        }
        else if (dado1!=dado2 && (dado1==1 || dado2==1))
        {
            acumRonda = 0;
            cout << "Cerdo hundido en el barro!" << endl;
            cout << "Perdiste todas las trufas acumuladas de la ronda!" << endl;
            caso=2;
        }
        else if (dado1==dado2 && dado1==1)
        {
            acumRonda = 0;
            acumJugador = 0;
            caso=2;
            cout << "Perdiste todas las trufas acumuladas!" << endl;
        }
        acumJugador +=acumRonda;
        cout << endl;
        cout << "Acumulaste: " << acumRonda << " trufas" << endl << endl;
    }
    while (caso==1);
    if (turno==1)
    {
        acumJugador1 = acumJugador;
    }
    else
    {
        acumJugador2 = acumJugador;
    }
    system("PAUSE");

}

void ronda3dados(std::string jugador1,std::string jugador2, std::string turno, int &ronda, int &acumJugador1, int &acumJugador2, int oinks, int &lanzamientos)
{
    int lanzamiento=1;
    int puntos=0, caso, dado1, dado2, dado3, suma;
    char lanzar;
    int acumRonda1=0, acumRonda2=0;
    suma3Dados(dado1,dado2,dado3,suma);
    do
    {
        menuJuego1(jugador1, jugador2, acumJugador1, acumJugador2);
        menuJuego2(jugador1, ronda, lanzamiento, lanzamientos, acumRonda1);
        lanzar2dados(dado1, dado2);
        cout << endl;
        if (dado1!=dado2 && dado1!=dado3 && dado2!=dado3 && dado1!=1 && dado2!=1 && dado3!=1)
        {
            acumRonda1+=suma;
            caso=0;
            do
            {
                cout << "Continuar (S/N): ";
                cin >> lanzar;
                tolower(lanzar);
            }
            while (lanzar == 's' && lanzar == 'n');
            if (lanzar == 'n')
            {
                caso = 2;
            }
            else
            {
                caso = 1;
                lanzamientos++;
            }
        }
        else if (dado1==dado2 && dado1==dado3 && dado1 !=1)
        {
            acumRonda1+= 2*(dado1+dado2);
            cout << "Oink!"<< endl;
            caso = 1;
            lanzamientos++;
            system("PAUSE");
        }
        else if (dado1 != dado2 && dado1 != dado3 && dado3!=dado2 && (dado1 == 1 || dado2 == 1 || dado3 == 1))
        {
            acumRonda1 = 0;
            cout << "Cerdo hundido en el barro!" << endl;
            caso=2;
        }
        else if (dado1 == dado2 && dado1 == dado3 && dado1 == 1)
        {
            acumRonda1 = 0;
            acumJugador1 = 0;
            caso=2;
        }
        else if ((dado1 == dado2 && dado1 == 1) || (dado1 == dado3 && dado1 == 1) || (dado2 == dado3 && dado2 == 1))
        {
            acumRonda1 = 0;
            acumJugador1 = 0;
            caso=2;
        }
        cout << endl;
        cout << "Trufas ganadas: " << acumRonda1 << endl;
    }
    while (caso==1);
    system("PAUSE");
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

int puntajeFinal(int acumjugador1, int acumjugador2, int &masTrufas1, int &masTrufas2)
{
    if (acumjugador1>acumjugador2)
    {
        masTrufas1=5;
    }
    else if (acumjugador2>acumjugador1)
    {
        masTrufas2=5;
    }
    else
    {
        masTrufas1=5;
        masTrufas1=5;
    }
}

void pantallaFinal(std::string jugador1, std::string jugador2, int oinks1, int oinks2)
{
    int pdvOinks1 = 2*oinks1, pdvOinks2 = 2*oinks2;
    int suma1 = oinks1, suma2 =  oinks2;
    string ganador;
    int ganadorPDV;
    string oink;
    if (suma1 > suma2)
    {
        ganador = jugador1;
        ganadorPDV=suma1;
    }
    else
    {
        ganador = jugador2;
        ganadorPDV = suma2;
    }

    rlutil::locate(0,0);
    cout << "GRAN CERDO" << endl;
    lineaCompleta();
    rlutil::locate(0,4);
    cout << "HITO";
    rlutil::locate(24,4);
    cout << jugador1;
    rlutil::locate(49,4);
    cout << jugador2 << endl;
    lineaCompleta();
    rlutil::locate(0,6);
    cout << "Mas trufas en total";
    cout << pdvOinks1 <<  " PDV (" << oinks1 << " trufas)";
    rlutil::locate(49,6);
    cout << pdvOinks2 <<  " PDV (" << oinks2 << " trufas)";
    rlutil::locate(0,6);
    cout << "Cada 50 trufas" << endl;
    rlutil::locate(23,7);
    cout << pdvOinks1 <<  " PDV (" << oinks1 << " trufas)";
    rlutil::locate(49,7);
    cout << pdvOinks2 <<  " PDV (" << oinks2 << " trufas)";
    rlutil::locate(0,8);
    cout << "Oinks";
    rlutil::locate(23,8);
    cout << pdvOinks1 <<  " PDV (" << oinks1 << " Oinks)";
    rlutil::locate(49,8);
    cout << pdvOinks2 <<  " PDV (" << oinks2 << " Oinks)";
    rlutil::locate(0,9);
    cout << "Cerdo codicioso" << endl;
    rlutil::locate(23,9);
    cout << pdvOinks1 <<  " PDV (" << oinks1 << " lanzamientos)";
    rlutil::locate(49,9);
    cout << pdvOinks2 <<  " PDV (" << oinks2 << " lanzamientos)";
    rlutil::locate(0,10);
    lineaCompleta();
    rlutil::locate(0,11);
    cout << "TOTAL";
    cout << suma1 <<  " PDV";
    rlutil::locate(49,9);
    cout << suma2 <<  " PDV";
    rlutil::locate(0,10);
    lineaCompleta();
    rlutil::locate(0,13);
    cout << "GANADOR: " << ganador << "con " << ganadorPDV << "puntos de victoria." << endl;
    cout << endl;
    cout << "Ingrese Oink para continuar:";
    cin >> oink;
}

void creditos()
{
    cout << "DANIEL BERMAN, LEGAJO: 26198" << endl;
    cout << "JESICA IBAÑEZ, LEGAJO: 25509" << endl;
}

void ingresarJugadores()
{
    cout << "Ingresar nombre de jugador: ";
}

void juego(int &acumJugador1, int &acumJugador2)
{
    int ronda = 1, lanzamientos = 0;
    int oinks1 = 0, oinks2 = 0;
    int dado[2], n1 = 1, n2= 1;
    std::string jugador1, jugador2;
    seleccionJugadores(jugador1, jugador2);
    rlutil::locate(0,21);
    system("PAUSE");
    do
    {
        rlutil::cls();
        ronda2dados(jugador1,jugador2, 1, ronda, acumJugador1, acumJugador2, lanzamientos, oinks1);
        rlutil::cls();
        ronda2dados(jugador1,jugador2, 2, ronda, acumJugador1, acumJugador2, lanzamientos, oinks2);
        ronda++;
    }
    while ((acumJugador1<=50 || acumJugador2 <=50) && ronda<=5);
    /* do{
     rlutil::cls();
     ronda3dados(jugador1,jugador2, 1, ronda, acumJugador1, lanzamientos);
     rlutil::cls();
     ronda3dados(jugador1,jugador2, 2, ronda, acumJugador2, lanzamientos);
     ronda++;
    }while ((ronda<=5);*/
    rlutil::cls();
    pantallaFinal(jugador1,jugador2, oinks1, oinks2);
}


void estadisticas()
{
    cout << "Jugador con mas PDV: ";
}
