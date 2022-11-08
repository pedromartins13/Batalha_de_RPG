#include <Classe.hpp>

Ladino::Ladino()
{
    this->setInt(1);
    this->setCon(2);
    this->setAtq(1);
    this->setDes(3);
}

int Ladino::Ataque_de_adaga(int *ataque, int *atq)
{
    int custo = 25;
    int dano_base = 10;

    ataque = ataque - custo;

    return dano_base * (*atq);
}

int Ladino::Ataque_furtivo(int *ataque, int *atq)
{
    int custo = 25;
    int dano_base = 10;

    ataque = ataque - custo;

    return dano_base * (*atq);
}

int Ladino::Arco_e_Flecha(int *ataque, int *atq)
{
    int custo = 25;
    int dano_base = 10;

    ataque = ataque - custo;

    return dano_base * (*atq);
}

int Ladino::Estrangulamento(int *ataque, int *atq)
{
    int custo = 25;
    int dano_base = 10;

    ataque = ataque - custo;

    return dano_base * (*atq);
}
