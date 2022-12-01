#ifndef INIMIGOS_H
#define INIMIGOS_H

#include "../lib/Personagem.hpp"

class Inimigos : public Personagem
{
private:
public:
    Inimigos(std::string _nome, Classe *_classe);
    int Ataque_1();
    int Ataque_2();
    int Ataque_3();
    int Ataque_4();
};

#endif
