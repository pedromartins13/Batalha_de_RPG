#ifndef TURNO_H
#define TURNO_H

#include "../lib/Inimigos.hpp"

void Luta(Inimigos *_inimigo, Personagem *_jogador);
void Turno(Inimigos *_inimigo, Personagem *_jogador, int turno);
void ConferirVida(Inimigos *_inimigo, Personagem *_jogador);
void EntreTurnos();

#endif
