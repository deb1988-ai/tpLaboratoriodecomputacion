#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <string>
void linea();

void menuPrincipal();

void seguirLanzando();

int seleccionJugadores(std::string &jugador1, std::string &jugador2);

void pantallaFinal(std::string jugador1, std::string jugador2);

void estadisticas();

void creditos();

int lanzarDado();

void lanzar2dados(int &a, int &b);

void lanzar3dados();

void ingresarJugadores();

int puntaje(int dado1, int dado2, int &acumjugador, int&acumronda);

void puntaje3dados(int dado1, int dado2, int dado3, int &acumjugador);

void menuJuego1(std::string jugador1,std::string jugador2, int &acumronda1, int &acumronda2);

void menuJuego2(std::string turno, int ronda, int lanzamiento, int lanzamientos, int trufasRonda);

void uno();

void dos();

void tres();

void cuatro();

void cinco();

void seis();

void continuar();

void ronda2dados(std::string jugador1,std::string jugador2, std::string turno, int &ronda, int &acumJugador);

int seleccionJugadores(std::string &jugador1, std::string &jugador2, int &n1, int &n2);

char conversionchar(char &a, char b);

void numeromayor(int a, int b, int &mayor);

void juego (int &acumJugador1, int &acumJugador2);

void imprimirDado(int a);

#endif // FUNCIONES_H_INCLUDED
