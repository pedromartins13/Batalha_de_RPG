#include "../lib/Inimigos.hpp"
#include "../lib/Robo.hpp"
#include "../lib/Interface.hpp"

Inimigos::Inimigos(std::string _nome, Classe *_classe)
{
    this->setNome(_nome);
    if (this->getNome() == "Goblin")
    {
        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 10 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 50 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 70 * this->getClasse()->getMCON());
        this->setEXP(100);
    }
    else if (this->getNome() == "Zumbi")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 15 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 70 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 100 * this->getClasse()->getMCON());
        this->setEXP(100);
    }
};

