#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <string>
void linea();

void lineaCompleta();

void menuPrincipal();

void seguirLanzando();

void uno();

void dos();

void tres();

void cuatro();

void cinco();

void seis();

void imprimirDado(int a);

int seleccionJugadores(std::string &jugador1, std::string &jugador2);

void estadisticas(std::string jugador, int PDV);

void creditos();

int lanzarDado();

void lanzar2dados(int &a, int &b);

void lanzar3dados(int &a, int &b, int &c);

void menuSalida(int &opcion);

void ingresarJugadores();

void menuJuego1(std::string jugador1,std::string jugador2, int &acumJ1ronda, int &acumJ2ronda);

void menuJuego2(std::string turno, int ronda, int lanzamiento, int lanzamientos, int trufasRonda);

void continuar();

void ronda2dados(std::string jugador1,std::string jugador2, int turno, int ronda, int &acumJugador1, int &acumJugador2, int &lanzamientos, int &oinks);

void ronda3dados(std::string jugador1,std::string jugador2, int turno, int ronda, int &acumJugador1, int &acumJugador2, int &lanzamientos, int &oinks);

int seleccionJugadores(std::string &jugador1, std::string &jugador2, int &n1, int &n2);

char conversionchar(char &a, char b);

void numeromayor(int a, int b, int &mayor);

void juego (int &acumJugador1, int &acumJugador2);

int continuar2();

void pantallaFinal(std::string jugador1, std::string jugador2, int oinks1, int oinks2, int acumJugador1, int acumJugador2, int lanzamientos1, int lanzamientos2);

#endif // FUNCIONES_H_INCLUDED
