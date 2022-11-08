#include <Classe.hpp>

Classe::Classe()
{
    this->multiplicador_ataque = 1;
    this->multiplicador_constituição = 1;
    this->multiplicador_destreza = 1;
    this->multiplicador_inteligencia = 1;
};

// Getters
int Classe::getAtq()
{
    return this->multiplicador_ataque;
};

int Classe::getCon()
{
    return this->multiplicador_constituição;
}

int Classe::getInt()
{
    return this->multiplicador_inteligencia;
}
int Classe::getDes()
{
    return this->multiplicador_destreza;
}

// Setters
void Classe::setInt(int _int)
{
    this->multiplicador_inteligencia = _int;
}
void Classe::setAtq(int _atq)
{
    this->multiplicador_ataque = _atq;
}
void Classe::setCon(int _con)
{
    this->multiplicador_constituição = _con;
}
void Classe::setDes(int _des)
{
    this->multiplicador_destreza = _des;
};
