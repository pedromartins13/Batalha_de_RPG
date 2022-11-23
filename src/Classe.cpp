#include "../lib/Classe.hpp"

Classe::Classe(std::string nome_da_classe)
{
    if (nome_da_classe == "Mago")
    {
        this->nome_da_classe = nome_da_classe;
        this->Multiplicador_INT = 3;
        this->Multiplicador_CON = 2;
        this->Multiplicador_DES = 1;
        this->Multiplicador_FOR = 1;
    }
    else if (nome_da_classe == "Guerreiro")
    {
        this->nome_da_classe = nome_da_classe;
        this->Multiplicador_INT = 1;
        this->Multiplicador_CON = 3;
        this->Multiplicador_DES = 1;
        this->Multiplicador_FOR = 3;
    }
    else if (nome_da_classe == "Ladino")
    {
        this->nome_da_classe = nome_da_classe;
        this->Multiplicador_INT = 1;
        this->Multiplicador_CON = 2;
        this->Multiplicador_DES = 3;
        this->Multiplicador_FOR = 2;
    }
    else
    {
        std::cout << "Classe não Encontrada" << std::endl;
    }
};

Classe::Classe()
{
    this->nome_da_classe = "";
    this->Multiplicador_INT = 0;
    this->Multiplicador_CON = 0;
    this->Multiplicador_DES = 0;
    this->Multiplicador_FOR = 0;
};

int Classe::Ataque_1()
{
    return 5;
}

int Classe::Ataque_2()
{
    return 10;
}

int Classe::Ataque_3()
{
    return 15;
}

int Classe::Ataque_4()
{
    return 20;
}

int Classe::getMCON()
{
    return this->Multiplicador_CON;
}

int Classe::getMDES()
{
    return this->Multiplicador_DES;
}

int Classe::getMFOR()
{
    return this->Multiplicador_FOR;
}

int Classe::getMINT()
{
    return this->Multiplicador_INT;
}