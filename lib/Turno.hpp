#ifndef TURNO_H
#define TURNO_H

#include "../lib/Inimigos.hpp"

void Luta(Inimigos *_inimigo, Personagem *_jogador);
void ConferirVida(Inimigos *_inimigo, Personagem *_jogador);
void EntreTurnos(Personagem *_jogador);
void LutaFinal(Inimigos *_inimigo, Personagem *_jogador);

#endif
