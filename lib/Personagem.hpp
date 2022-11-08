#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <Classe.hpp>

using namespace std;

class Personagem
{
private:
    Classe classe;
    int vida;
    int mana;
    int experiencia;
    int ataque;
    int defesa;
    int destreza;
    int inteligencia;
    int constituição;
    int level;

    string nome;
    string história;

public:
    Personagem(string _nome, string _historia, int _ataque, int _defesa, int _inteligencia, int _constituicao);
    ~Personagem();

    void levelUp();

    // Getters e Setters

    void setVida(int _vida);
    void setMana(int _mana);
    void setExperiencia(int _exp);
    void setAtaque(int _atq);
    void setDefesa(int _def);
    void setDestreza(int _des);
    void setInteligencia(int _int);
    void setConstituição(int _con);
    void setClasse(Classe _classe);

    int getVida();
    int getMana();
    int getExperiencia();
    int getAtaque();
    int getDefesa();
    int getDestreza();
    int getInteligencia();
    int getConstituição();
    int getLevel();
    Classe getClasse();
};

#endif
