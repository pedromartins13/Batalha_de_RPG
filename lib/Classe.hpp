#ifndef CLASSE_H
#define CLASSE_H

#include <Personagem.hpp>

class Classe
{
private:
    int multiplicador_inteligencia;
    int multiplicador_ataque;
    int multiplicador_destreza;
    int multiplicador_constituição;

public:
    Classe();
    int getInt();
    int getAtq();
    int getCon();
    int getDes();
    void setInt(int _int);
    void setAtq(int _arq);
    void setCon(int _con);
    void setDes(int _des);
};

class Mago : private Classe
{
public:
    Mago();

    int Bola_de_Fogo(int *_mana, int *_int);
    int Raio_de_Gelo(int *_mana, int *_int);
    int Tsunami(int *_mana, int *_int);
    int Choque(int *_mana, int *_int);
};

class Ladino : private Classe
{
public:
    Ladino();

    int Ataque_furtivo(int *_destreza, int *des);
    int Ataque_de_adaga(int *_destreza, int *des);
    int Arco_e_Flecha(int *_destreza, int *des);
    int Estrangulamento(int *_destreza, int *des);
};

class Guerreiro : private Classe
{
public:
    Guerreiro();

    int Ataque_forte(int *ataque, int *atq);
    int Ataque_longo(int *ataque, int *atq);
    int Dança_das_Espadas(int *ataque, int *atq);
    int Grito_do_guerreiro(int *ataque, int *atq);
};

#endif
