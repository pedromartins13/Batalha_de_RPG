#include <Personagem.hpp>
#include <Interface.hpp>

Personagem::Personagem(string _nome, string _historia, int _ataque, int _defesa, int _inteligencia, int _constituicao, Classe _classe)
{

    this->nome = _nome;
    this->história = _historia;
    this->ataque = _ataque;
    this->defesa = _defesa;
    this->inteligencia = _inteligencia;
    this->constituição = _constituicao;
    this->vida = 100 + (10 * (this->constituição));
    this->mana = 100 + (10 * (this->inteligencia));
    this->level = 1;
    this->experiencia = 0;

    this->classe = _classe;
};

Personagem::Personagem(string _nome, int _ataque, int _defesa, int _inteligencia, int _constituicao, Classe _classe)
{
    this->setNome(_nome);
    this->setAtaque(_ataque);
    this->setDefesa(_defesa);
    this->setInteligencia(_inteligencia);
    this->setConstituição(_constituicao);
    this->setClasse(_classe);
};
Personagem::Personagem()
{
    Classe aux;
    this->setNome("");
    this->setHistoria("");
    this->setAtaque(0);
    this->setDefesa(0);
    this->setInteligencia(0);
    this->setConstituição(0);
    this->setClasse(aux);
}

void Personagem::levelUp()
{
    if (this->experiencia >= 100)
    {
        this->level = level + 1;
        this->experiencia = this->experiencia - 100;
        cout << "Level UP: " << this->level << endl;
    };
};

void Personagem::setVida(int _vida)
{
    this->vida = _vida;
};

void Personagem::setMana(int _mana)
{
    this->mana = _mana;
};
void Personagem::setExperiencia(int _exp)
{
    this->experiencia = _exp;
}
void Personagem::setAtaque(int _atq)
{
    this->ataque = _atq;
}
void Personagem::setDefesa(int _def)
{
    this->defesa = _def;
}
void Personagem::setDestreza(int _des)
{
    this->destreza = _des;
}
void Personagem::setInteligencia(int _int)
{
    this->inteligencia = _int;
}
void Personagem::setConstituição(int _con)
{
    this->constituição = _con;
}
void Personagem::setNome(string _nome)
{
    this->nome = _nome;
}
void Personagem::setClasse(Classe _classe)
{
    this->classe = _classe;
}
void Personagem::setHistoria(string _historia)
{
    this->história = _historia;
}

int Personagem::getVida()
{
    return this->vida;
}
int Personagem::getMana()
{
    return this->mana;
}
int Personagem::getExperiencia()
{
    return this->experiencia;
}
int Personagem::getAtaque()
{
    return this->ataque;
}
int Personagem::getDefesa()
{
    return this->defesa;
}
int Personagem::getDestreza()
{
    return this->destreza;
}
int Personagem::getInteligencia()
{
    return this->inteligencia;
}
int Personagem::getConstituição()
{
    return this->constituição;
}
int Personagem::getLevel()
{
    return this->level;
}
Classe Personagem::getClasse()
{
    return this->classe;
}
