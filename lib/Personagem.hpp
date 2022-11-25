#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include "../lib/Classe.hpp"

class Personagem
{
private:
    int ataque, defesa, vida, mana, DES, INT, CON, FOR; // Atributos
    int level, experiencia;
    int vidaBasica;                        // Atributos de Evolução

    Classe *Classe_Personagem = new Classe;

    std::string nome, historia;

public:
    Personagem(std::string nome, std::string _historia, int _DES, int _INT, int _CON, int _FOR, Classe *_Classe);
    Personagem();
    ~Personagem();

    void setAtaque(int _ataque);
    void setDefesa(int _defesa);
    void setVida(int _vida);
    void setMana(int _mana);
    void setDES(int _DES);
    void setINT(int _INT);
    void setCON(int _CON);
    void setFOR(int _FOR);
    void setLVL(int _LVL);
    void setEXP(int _EXP);
    void setClasse(Classe *_Classe);
    void setNome(std::string _nome);

    int getAtaque();
    int getDefesa();
    int getVida();
    int getMana();
    int getDES();
    int getINT();
    int getCON();
    int getFOR();
    int getLVL();
    int getEXP();
    std::string getNome();
    Classe* getClasse();

    void ConfiguracoesIniciais();
    int Atacar(int dano);
    int Critico();
};
#endif
