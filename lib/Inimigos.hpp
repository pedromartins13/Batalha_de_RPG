#ifndef INIMIGOS_H
#define INIMIGOS_H

#include "../lib/Personagem.hpp"

class Inimigos : public Personagem
{
private:
    std::string fraqueza;

public:
    Inimigos(std::string _nome, Classe *_classe);
};

#endif
