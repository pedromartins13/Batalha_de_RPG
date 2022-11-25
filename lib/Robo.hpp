#ifndef ROBO_H
#define ROBO_H

#include <cstdlib>
#include <ctime>
#include "../lib/Inimigos.hpp"

int numeroAleatorio(int menor, int maior);
void TurnoRobo(Inimigos *_inimigo, Personagem *_jogador);

#endif