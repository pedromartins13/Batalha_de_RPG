#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include "../lib/Classe.hpp"
#include "../lib/Mochila.hpp"

class Personagem
{
private:
    int ataque, defesa, vida, stamina, mana, DES, INT, CON, FOR; // Atributos
    int level, experiencia;                                      // Atributos de Evolução

    Mochila *Mochila_Jogador = new Mochila;
    Classe *Classe_Personagem = new Classe;

    std::string nome;

public:
    Personagem(std::string nome, int _DES, int _INT, int _CON, int _FOR, Classe *_Classe, Mochila *_Mochila);
    Personagem();
    ~Personagem();

    void setAtaque(int _ataque);
    void setDefesa(int _defesa);
    void setVida(int _vida);
    void setStamina(int _Stamina);
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
    int getStamina();
    int getMana();
    int getDES();
    int getINT();
    int getCON();
    int getFOR();
    int getLVL();
    int getEXP();
    std::string getNome();
    Classe *getClasse();
    Mochila *getMochila();

    void ConfiguracoesIniciais();
    int Atacar(int dano, int defesa);
    int Critico();
    void SubirdeNivel(int exp);
    void EscolhaDeAtributos();
    void usarItem(int item);
};
#endif
