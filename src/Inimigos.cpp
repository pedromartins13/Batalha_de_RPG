#include "../lib/Inimigos.hpp"

Inimigos::Inimigos(std::string _nome, Classe *_classe)
{
    this->setNome(_nome);
    if (this->getNome() == "Goblin")
    {
        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 7 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 7 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 7 * this->getClasse()->getMCON());
        this->fraqueza = "FOGO";
    }
    else if (this->getNome() == "Zumbi")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 5 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 5 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 5 * this->getClasse()->getMCON());
        this->fraqueza = "NORMAL";
    }
};