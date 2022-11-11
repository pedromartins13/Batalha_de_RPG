#ifndef INIMIGOS_H
#define INIMIGOS_H

#include <Personagem.hpp>

class Inimigos : public Personagem
{
private:
    int lvl;
public:
    Inimigos(string _nome, int _ataque, int _defesa, int _inteligencia, int _constituicao, Classe _classe);
    void setLevel(int _lvl) override;
};

#endif
