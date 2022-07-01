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

void lanzar3dados(int &a, int &b, int &c)
{
    a = lanzarDado();
    b = lanzarDado();
    c = lanzarDado();
    imprimirDado(a);
    imprimirDado(b);
    imprimirDado(c);
}

int suma2Dados(int a, int b)
{
    int suma = a + b;
    return suma;
}

int suma3Dados(int a, int b, int c)
{
   int suma = a + b + c;
    return suma;
}

void creditos()
{
    cout << "DANIEL BERMAN, LEGAJO: 26198" << endl;
    cout << "JESICA IBAÑEZ, LEGAJO: 25509" << endl;
}

void menuSalida(int &opcion)
{
    char c;
    do
    {
        cout << "Salir (S/N): ";
        cin >> c;
        tolower(c);
        rlutil::cls();
    }
    while (c!= 's' && c!= 'n');
    if (c == 's')
    {
        rlutil::cls();
        cout << "Hasta luego :)";
    }
    else
    {
        opcion = 4;
        rlutil::cls();
    }
    cin.clear();
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
    if (c == 'n')
    {
        rlutil::cls();
        cout << "Hasta luego :)";
    }
}

int continuar2()
{
    char lanzar;
    int caso;
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
    }
    return caso;
}

void ingresarJugadores()
{
    cout << "Ingresar nombre de jugador: ";
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

void menuJuego1(std::string jugador1,std::string jugador2, int acumJ1ronda, int acumJ2ronda)
{
    rlutil::cls();
    cout << "GRAN CERDO" << endl;
    lineaCompleta();
    rlutil::locate(0,3);
    cout << jugador1 << ": " << acumJ1ronda << " trufas acumuladas";
    rlutil::locate(34,3);
    cout << jugador2 << ": " << acumJ2ronda <<" trufas acumuladas";
    cout << endl;
}

void menuJuego2(std::string turno, int ronda, int lanzamiento, int lanzamientos, int trufasRonda)
{
    cout << "TURNO DE " << turno << endl;
    cout << "+-------------------------+" << endl;
    cout << "| RONDAS #" << ronda << "               |" << endl;
    if (trufasRonda < 9){
    cout << "| TRUFAS DE LA RONDA: " << trufasRonda << "   |" << endl;
    } else if (trufasRonda > 9 && trufasRonda < 99){
    cout << "| TRUFAS DE LA RONDA: " << trufasRonda << "  |" << endl;
    }
    else if (trufasRonda > 99 && trufasRonda < 999){
    cout << "| TRUFAS DE LA RONDA: " << trufasRonda << " |" << endl;
    }
    else if (trufasRonda > 999 && trufasRonda < 9999){
    cout << "| TRUFAS DE LA RONDA: " << trufasRonda << "  |" << endl;
    }
    if (lanzamientos < 9){
    cout << "| LANZAMIENTOS:" << lanzamientos << "          |" << endl;
    } else if (lanzamientos > 9 && lanzamientos < 99){
    cout << "| LANZAMIENTOS:" << lanzamientos << "         |" << endl;
    }
    else if (lanzamientos > 99 && lanzamientos < 999){
    cout << "| LANZAMIENTOS:" << lanzamientos << "        |" << endl;
    }
    else if (lanzamientos > 999 && lanzamientos < 9999){
    cout << "| LANZAMIENTOS:" << lanzamientos << "        |" << endl;
    }
    cout << "+-------------------------+" << endl << endl;
    cout << "LANZAMIENTO #" << lanzamiento << endl << endl;
}

int seleccionJugadores(string &jugador1, string &jugador2)
{
    string jugadores[2];
    int lanzamiento, ronda, suma[2], mayor[2], acum = 0;
    int dado[2];
    ingresarJugadores();
    cin >> jugadores[0];
    ingresarJugadores();
    cin >> jugadores[1];

    do
    {
        lineaCompleta();
        cout << jugadores[0] << endl;
        lineaCompleta();
        lanzar2dados(dado[0], dado[1]);
        suma[0] = suma2Dados(dado[0], dado[1]);
        numeromayor(dado[0], dado[1], mayor[0]);
        lineaCompleta();
        cout << jugadores[1] << endl;
        lineaCompleta();
        lanzar2dados(dado[0], dado[1]);
        suma[1] = suma2Dados(dado[0], dado[1]);
        numeromayor(dado[0], dado[1], mayor[0]);
        if (suma[0] == suma[1])
        {
            acum++;
        }
        if (mayor[0] == mayor[1])
        {
            acum++;
        }
    }
    while (acum == 2);

    if (suma[0] > suma[1])
    {
        jugador1 = jugadores[0];
        jugador2 = jugadores[1];
    }
    else if (suma[1] > suma[0])
    {
        jugador2 = jugadores[0];
        jugador1 = jugadores[1];
    }
    else if (mayor[0] > mayor[1])
    {
        jugador1 = jugadores[0];
        jugador2 = jugadores[1];
    }
    else
    {
        jugador2 = jugadores[0];
        jugador1 = jugadores[1];
    }
}

void ronda2dados(std::string jugador1,std::string jugador2, int turno, int ronda, int &acumJugador1, int &acumJugador2, int &lanzamientos, int &oinks, int &estado)
{
    int acumJugador = 0;
    int lanzamiento = 1;
    int caso, dado[2], suma;
    int acumRonda = 0;
    string turnoJugador;

    if (turno == 1)
    {
        turnoJugador = jugador1;
    }
    else
    {
        turnoJugador = jugador2;
    }

    do
    {
        menuJuego1(jugador1, jugador2, acumJugador1, acumJugador2);

        menuJuego2(turnoJugador, ronda, lanzamiento, lanzamientos, acumRonda);

        lanzar2dados(dado[0], dado[1]);

        suma = suma2Dados(dado[0], dado[1]);
        cout << endl;

        if (dado[0]!=dado[1] && dado[0]!=1 && dado[1]!=1)
        {
            acumRonda += suma;
            caso=0;
            cout << "¡Sumaste " << suma << " trufas!" << endl << endl;
            caso = continuar2();
        }
        else if (dado[0] == dado[1] && dado[0] != 1)
        {
            acumRonda += 2*(suma);
            cout << "Oink!"<< endl;
            cout << "¡Sumaste " << 2*(suma) << " trufas!" << endl << endl;
            oinks++;
            caso = 0;
            system("PAUSE");
        }
        else if (dado[0] != dado[1] && (dado[0] == 1 || dado[1] == 1))
        {
            acumRonda = 0;
            cout << "Cerdo hundido en el barro!" << endl;
            cout << "Perdiste todas las trufas acumuladas de la ronda!" << endl;
            caso = 2;
            estado = 2;
        }
        else if (dado[0] == dado[1] && dado[0] == 1)
        {
            acumRonda = 0;
            acumJugador = 0;
            caso = 3;
            cout << "Perdiste todas las trufas acumuladas!" << endl;
        }
        lanzamientos++;
        cout << endl;
        cout << "Acumulaste: " << acumRonda << " trufas" << endl << endl;
        system("PAUSE");
    }
    while (caso == 1);

    acumJugador += acumRonda;

    if (turno == 1 && caso == 3)
    {
        acumJugador1 = 0;
    }
    else if (turno == 2 && caso == 3)
    {
        acumJugador2 = 0;
    } else if (turno == 1 && caso != 3){
        acumJugador1 += acumJugador;
    } else if (turno == 2 && caso != 3){
        acumJugador2 += acumJugador;
    }
if (acumJugador1 >= 50 && acumJugador2 >= 50){
    estado = 1;
}
}

void ronda3dados(std::string jugador1,std::string jugador2, int turno, int ronda, int &acumJugador1, int &acumJugador2, int &lanzamientos, int &oinks)
{
    int lanzamiento = 1;
    int puntos = 0, caso, dado[3], suma;
    int acumRonda = 0, acumJugador = 0;
    int acumRonda2 = 0;
    string turnoJugador;

    if (turno == 1)
    {
        turnoJugador = jugador1;
    }
    else
    {
        turnoJugador = jugador2;
    }

    do
    {
        menuJuego1(jugador1, jugador2, acumJugador1, acumJugador2);

        menuJuego2(turnoJugador, ronda, lanzamiento, lanzamientos, acumRonda);

        lanzar3dados(dado[0], dado[1],dado[2]);
        suma = suma3Dados(dado[0], dado[1], dado[2]);
        cout << endl;

        if (dado[0] != dado[1] && dado[0] != dado[2] && dado[1]!=dado[2] && dado[0]!=1 && dado[1]!=1 && dado[2]!=1)
        {
            acumRonda += suma;
            caso = 0;
            cout << "¡Sumaste " << suma << " trufas!" << endl << endl;
            caso = continuar2();
        }
        else if (dado[0] == dado[1] && dado[0] == dado[2] && dado[0] !=1)
        {
            acumRonda += 2 * suma;
            cout << "Oink!"<< endl;
            cout << "¡Sumaste " << 2*(suma) << " trufas!" << endl << endl;
            oinks++;
            caso = 1;
            system("PAUSE");
        }
        else if (((dado[0] == dado[1] && dado[0]!= dado[2]) || (dado[0] == dado[2] && dado[0]!= dado[1]) || (dado[1] == dado[2] && dado[0]!= dado[1])) && dado[0] !=1 && dado[1] !=1 && dado[2] !=1)
        {
            acumRonda += suma;
            caso = 0;
            caso = continuar2();
            system("PAUSE");
        }
        else if (dado[0] != dado[1] && dado[0] != dado[2] && dado[2]!=dado[1] && (dado[0] == 1 || dado[1] == 1 || dado[2] == 1))
        {
            lanzamientos++;
            acumRonda = 0;
            cout << "Cerdo hundido en el barro!" << endl;
            caso = 2;
        }
        else if (dado[0] == dado[1] && dado[0] == dado[2] && dado[0] == 1)
        {
            acumRonda2 = acumRonda;
            acumRonda = 0;
            acumJugador = 0;
            caso = 3;
        }
        else if ((dado[0] == dado[1] && dado[0] == 1) || (dado[0] == dado[2] && dado[0] == 1) || (dado[1] == dado[2] && dado[1] == 1))
        {
            acumRonda = 0;
            acumJugador = 0;
            caso = 4;
            cout << "Perdiste todas las trufas acumuladas!" << endl;
        }
        lanzamientos++;
        cout << endl;
        cout << "Acumulaste: " << acumRonda << " trufas" << endl << endl;
        system("PAUSE");
    }

    while (caso == 1);
     acumJugador += acumRonda;

    if (turno == 1 && caso == 3)
    {
        acumJugador1 = 0;
    }
    else if (turno == 2 && caso == 4)
    {
        acumJugador2 = 0;
    } else if (turno == 1 && caso != 3){
        acumJugador1 += acumJugador;
    } else if (turno == 2 && caso != 3){
        acumJugador2 += acumJugador;
    } else if (turno == 1 && caso != 4){
        acumJugador2 += acumRonda2;
    } else if (turno == 2 && caso != 4){
        acumJugador1 += acumRonda2;
    }
}


void numeromayor(int a, int b, int &mayor)
{
    if (a > b)
    {
        mayor = a;
    }
    else
    {
        mayor = b;
    }
}

void mayorMenorIgual (int a, int b, int &c, int &d, int puntos)
{
    if (a > b)
    {
        c = puntos;
        d = 0;
    }
    else if (a > b)
    {
        c = 0;
        d = puntos;;
    }
    else
    {
        c = puntos;;
        d = puntos;;
    }
}

void pantallaFinal(std::string jugador1, std::string jugador2, int oinks1, int oinks2, int acumJugador1, int acumJugador2, int lanzamientos1, int lanzamientos2)
{
    int pdvOinks[2] = {2*oinks1, 2*oinks2};
    int trufas50[2] = {acumJugador1 - (acumJugador1%50),acumJugador2 - (acumJugador2%50)};
    int cada50[2] = {trufas50[0]/50, trufas50[1]/50};
    int masTrufas[2], lanzamientos[2];
    string ganador, oink;
    int ganadorPDV;

    mayorMenorIgual (acumJugador1, acumJugador2, masTrufas[0], masTrufas[1], 5);

    mayorMenorIgual (lanzamientos1, lanzamientos2, lanzamientos[0], lanzamientos[1], 3);

    int suma[2] = {oinks1 + masTrufas[0] + cada50[0] + lanzamientos[0], oinks2 + masTrufas[1] + cada50[1] + lanzamientos[1]};

    if (suma[0] > suma[1])
    {
        ganador = jugador1;
        ganadorPDV = suma[0];
    }
    else if (suma[0] < suma[1])
    {
        ganador = jugador2;
        ganadorPDV = suma[1];
    } else {
    ganador = "Empate";
    ganadorPDV = suma[1];
    }

    rlutil::locate(0,0);
    cout << "GRAN CERDO" << endl;
    lineaCompleta();
    cout << endl;
    rlutil::locate(0,4);
    cout << "HITO";
    rlutil::locate(24,4);
    cout << jugador1;
    rlutil::locate(49,4);
    cout << jugador2 << endl;
    lineaCompleta();
    rlutil::locate(0,6);
    cout << "Mas trufas en total";
    rlutil::locate(23,6);
    cout << masTrufas[0] <<  " PDV (" << acumJugador1 << " trufas)";
    rlutil::locate(49,6);
    cout << masTrufas[1] <<  " PDV (" << acumJugador2 << " trufas)" << endl;
    rlutil::locate(0,7);
    cout << "Cada 50 trufas" << endl;
    rlutil::locate(23,7);
    cout << cada50[0] <<  " PDV (" << trufas50[0]  << " trufas)";
    rlutil::locate(49,7);
    cout << cada50[1] <<  " PDV (" << trufas50[1]  << " trufas)" << endl;
    rlutil::locate(0,8);
    cout << "Oinks";
    rlutil::locate(23,8);
    cout << pdvOinks[0]  <<  " PDV (" << oinks1 << " Oinks)";
    rlutil::locate(49,8);
    cout << pdvOinks[1]  <<  " PDV (" << oinks2 << " Oinks)" << endl;
    rlutil::locate(0,9);
    cout << "Cerdo codicioso" << endl;
    rlutil::locate(23,9);
    cout << lanzamientos[0] <<  " PDV (" << lanzamientos1 << " lanzamientos)";
    rlutil::locate(49,9);
    cout << lanzamientos[1] <<  " PDV (" << lanzamientos2 << " lanzamientos)" << endl;
    lineaCompleta();
    cout << "TOTAL";
    rlutil::locate(23,11);
    cout << suma[0] <<  " PDV";
    rlutil::locate(49,11);
    cout << suma[1] <<  " PDV" << endl << endl;
    cout << "GANADOR: " << ganador << " con " << ganadorPDV << " puntos de victoria." << endl;
    cout << endl;
    rlutil::locate(0,14);
    do
    {
        cout << "Ingrese Oink para continuar: ";
        rlutil::locate(0,29);
        cin >> oink;
    }
    while (oink != "oink");
}

void juego(int &acumJugador1, int &acumJugador2, std::string &jugador1, std::string &jugador2)
{
    int ronda = 1, lanzamientos[2] = {0,0};
    int oinks[2] = {0, 0};
    int dado[2];
    int estado = 1;
    std::string jugador[2];
    seleccionJugadores(jugador[0], jugador[1]);
    rlutil::locate(0,21);
    system("PAUSE");
    do
    {
        if (estado == 1){
        rlutil::cls();
        ronda2dados(jugador[0],jugador[1], 1, ronda, acumJugador1, acumJugador2, lanzamientos[0], oinks[0], estado);
        rlutil::cls();
        } else {
        rlutil::cls();
        ronda3dados(jugador[0],jugador[1], 1, ronda, acumJugador1, acumJugador2, lanzamientos[0], oinks[0]);
        rlutil::cls();
        }
        if (estado == 1){
        rlutil::cls();
        ronda2dados(jugador[0],jugador[1], 2, ronda, acumJugador1, acumJugador2, lanzamientos[1], oinks[1], estado);
        rlutil::cls();
        } else {
        rlutil::cls();
        ronda3dados(jugador[0],jugador[1], 2, ronda, acumJugador1, acumJugador2, lanzamientos[1], oinks[1]);
        rlutil::cls();
        }
        ronda++;
    }
    while (ronda <= 5);

    rlutil::cls();
    pantallaFinal(jugador[0],jugador[1], oinks[0], oinks[1], acumJugador1, acumJugador2, lanzamientos[0], lanzamientos[1]);
}


void estadisticas(std::string jugador, int PDV)
{
    cout << "Jugador con mas PDV: " << jugador << " con " << PDV << " PDV." << endl << endl;
}
