#include <Classe.hpp>

Ladino::Ladino()
{
    this->setInt(1);
    this->setCon(2);
    this->setAtq(1);
    this->setDes(3);
}

int Ladino::Ataque_de_adaga(int *_destreza, int *des)
{
    int custo = 25;
    int dano_base = 10;

    _destreza = _destreza - custo;

    return dano_base * (*des);
}

int Ladino::Ataque_furtivo(int *_destreza, int *des)
{
    int custo = 25;
    int dano_base = 10;

    _destreza = _destreza - custo;

    return dano_base * (*des);
}

int Ladino::Arco_e_Flecha(int *_destreza, int *des)
{
    int custo = 25;
    int dano_base = 10;

    _destreza = _destreza - custo;

    return dano_base * (*des);
}

int Ladino::Estrangulamento(int *_destreza, int *des)
{
    int custo = 25;
    int dano_base = 10;

    _destreza = _destreza - custo;

    return dano_base * (*des);
}
