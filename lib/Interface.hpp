#ifndef INTERFACE_H
#define INTERFACE_H

#include "../lib/Personagem.hpp"

Personagem Criar_Personagem(Classe *_Mago, Classe *_Guerreiro, Classe *_Ladino);

int menuInicial();
void LimparTela();
void Pausar();
#endif