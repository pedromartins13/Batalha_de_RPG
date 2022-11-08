#include <Classe.hpp>

Mago::Mago()
{
    this->setInt(3);
    this->setCon(1);
    this->setAtq(1);
    this->setDes(2);
}

int Mago::Bola_de_Fogo(int *_mana, int *_int)
{
    int custo = 25;
    int dano_base = 10;

    _mana = _mana - custo;

    return dano_base * (*_int);
}

int Mago::Raio_de_Gelo(int *_mana, int *_int)
{
    int custo = 25;
    int dano_base = 10;

    _mana = _mana - custo;

    return dano_base * (*_int);
}

int Mago::Tsunami(int *_mana, int *_int)
{
    int custo = 25;
    int dano_base = 10;

    _mana = _mana - custo;

    return dano_base * (*_int);
}

int Mago::Choque(int *_mana, int *_int)
{
    int custo = 25;
    int dano_base = 10;

    _mana = _mana - custo;

    return dano_base * (*_int);
}
