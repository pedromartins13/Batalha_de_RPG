#include "../lib/Personagem.hpp"

Personagem::Personagem(std::string nome, std::string _historia, int _DES, int _INT, int _CON, int _FOR, Classe *_Classe)
{
    this->nome = nome;
    this->historia = _historia;
    this->Classe_Personagem = _Classe;

    this->DES = this->Classe_Personagem->getMDES() * _DES;
    this->INT = this->Classe_Personagem->getMINT() * _INT;
    this->CON = this->Classe_Personagem->getMCON() * _CON;
    this->FOR = this->Classe_Personagem->getMFOR() * _FOR;

    this->ataque = this->FOR * 5;
    this->defesa = this->DES * 5;
    this->vida = this->CON * 5;
    this->mana = this->INT * 5;

    this->level = 1;
    this->experiencia = 0;
};

Personagem::Personagem()
{
    this->nome = "";
    this->historia = "";
    this->Classe_Personagem = NULL;

    this->DES = 0;
    this->INT = 0;
    this->CON = 0;
    this->FOR = 0;

    this->ataque = 0;
    this->defesa = 0;
    this->vida = 0;
    this->mana = 0;

    this->level = 1;
    this->experiencia = 0;
}

Personagem::~Personagem(){};
void Personagem::setVida(int _vida)
{
    this->vida = _vida;
};

void Personagem::setMana(int _mana)
{
    this->mana = _mana;
};
void Personagem::setEXP(int _exp)
{
    this->experiencia = _exp;
}
void Personagem::setAtaque(int _atq)
{
    this->ataque = _atq;
}
void Personagem::setDefesa(int _def)
{
    this->defesa = _def;
}
void Personagem::setDES(int _des)
{
    this->DES = _des;
}
void Personagem::setINT(int _int)
{
    this->INT = _int;
}
void Personagem::setCON(int _con)
{
    this->CON = _con;
}
void Personagem::setClasse(Classe *_classe)
{
    this->Classe_Personagem = _classe;
}

void Personagem::setNome(std::string _nome)
{
    this->nome = _nome;
}

int Personagem::getVida()
{
    return this->vida;
}
int Personagem::getMana()
{
    return this->mana;
}
int Personagem::getEXP()
{
    return this->experiencia;
}
int Personagem::getAtaque()
{
    return this->ataque;
}
int Personagem::getDefesa()
{
    return this->defesa;
}
int Personagem::getDES()
{
    return this->DES;
}
int Personagem::getINT()
{
    return this->INT;
}
int Personagem::getCON()
{
    return this->CON;
}
int Personagem::getLVL()
{
    return this->level;
}
std::string Personagem::getNome()
{
    return this->nome;
}
Classe *Personagem::getClasse()
{
    return this->Classe_Personagem;
}
