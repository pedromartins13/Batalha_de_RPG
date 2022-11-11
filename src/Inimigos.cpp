#include <Inimigos.hpp>

Inimigos::Inimigos(string _nome, int _ataque, int _defesa, int _inteligencia, int _constituicao, Classe _classe)
{
    this->setNome(_nome);
    this->setAtaque(_ataque);
    this->setDefesa(_defesa);
    this->setInteligencia(_inteligencia);
    this->setConstituição(_constituicao);
    this->setClasse(_classe);

    this->setVida(100 + (10 * (this->getConstituição())));
    this->setMana(100 + (10 * (this->getInteligencia())));
    this->setLevel(1);
}

void Inimigos::setLevel(int _lvl)
{
    this->lvl = _lvl;
}
