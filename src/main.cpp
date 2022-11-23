#include "../lib/Classe.hpp"
#include "../lib/Personagem.hpp"
#include "../lib/Interface.hpp"
#include "../lib/Inimigos.hpp"
#include "../lib/Turno.hpp"
#include <vector>

int opcaoMenu = 0;
int main()
{
    std::vector<Inimigos*> Lista_Inimigos;
    std::vector<Inimigos*>::iterator it;
    Inimigos Goblin("Goblin");
    Inimigos Zumbi("Zumbi");

    Lista_Inimigos.push_back(&Goblin);
    Lista_Inimigos.push_back(&Zumbi);

    Personagem Jogador = Criar_Personagem();
    opcaoMenu = menuInicial();

    if (opcaoMenu == 1)
    {
        while (Lista_Inimigos.size() != 0)
        {
            int i = 0;
            Luta(Lista_Inimigos[i], &Jogador);
            Lista_Inimigos.erase(Lista_Inimigos.begin());
            
        }
    }

    return 0;
};
