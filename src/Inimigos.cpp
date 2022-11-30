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
        this->setDefesa(this->getLVL() * 30 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 70 * this->getClasse()->getMCON());
        this->setEXP(100);
        this->setStamina(1000);
        this->setMana(1000);
    }
    else if (this->getNome() == "Zumbi")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 15 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 50 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 100 * this->getClasse()->getMCON());
        this->setEXP(100);
        this->setStamina(1000);
        this->setMana(1000);
    }
    else if (this->getNome() == "Bruxa")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 20 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 70 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 130 * this->getClasse()->getMCON());
        this->setEXP(50);

        this->setStamina(1000);
        this->setMana(1000);
    }
    else if (this->getNome() == "Aranha_Mutante")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 25 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 70 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 150 * this->getClasse()->getMCON());
        this->setEXP(50);

        this->setStamina(1000);
        this->setMana(1000);
    }
    else if (this->getNome() == "Assassino")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 30 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 50 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 120 * this->getClasse()->getMCON());
        this->setEXP(100);
        this->setStamina(1000);
        this->setMana(1000);
    }
    else if (this->getNome() == "Arqueiro")
    {

        this->setClasse(_classe);
        this->setAtaque(this->getLVL() * 40 * this->getClasse()->getMFOR());
        this->setDefesa(this->getLVL() * 60 * this->getClasse()->getMDES());
        this->setVida(this->getLVL() * 120 * this->getClasse()->getMCON());
        this->setEXP(100);
        this->setStamina(1000);
        this->setMana(1000);
    }
};
