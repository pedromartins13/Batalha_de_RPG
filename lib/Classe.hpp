#ifndef CLASSE_H
#define CLASSE_H

#include <iostream>
class Classe
{
private:
    std::string nome_da_classe;
    int Multiplicador_INT, Multiplicador_FOR, Multiplicador_CON, Multiplicador_DES;

public:
    Classe(std::string _nome_da_classe);
    Classe();

    int Ataque_1();
    int Ataque_2();
    int Ataque_3();
    int Ataque_4();

    int getMINT();
    int getMDES();
    int getMFOR();
    int getMCON();

    void listarAtaques();
    std::string getNome();
};

#endif
