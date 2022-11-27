#include "../lib/Classe.hpp"
#include "../lib/Personagem.hpp"
#include "../lib/Interface.hpp"
#include "../lib/Inimigos.hpp"
#include "../lib/Turno.hpp"
#include <vector>

int opcaoMenu = 0;
int main()
{
    Classe Mago("Mago");
    Classe Guerreiro("Guerreiro");
    Classe Ladino("Ladino");

    Personagem Jogador = Criar_Personagem(&Mago, &Guerreiro, &Ladino);
    LimparTela();

    while (1)
    {
        opcaoMenu = menuInicial();
        LimparTela();

        std::vector<Inimigos *> Lista_Inimigos;
        std::vector<Inimigos *>::iterator it;
        Inimigos Goblin("Goblin", &Guerreiro);
        Inimigos Zumbi("Zumbi", &Guerreiro);

        Lista_Inimigos.push_back(&Goblin);
        Lista_Inimigos.push_back(&Zumbi);

        if (opcaoMenu == 1)
        {
            while (Lista_Inimigos.size() != 0)
            {
                int i = 0;
                Luta(Lista_Inimigos[i], &Jogador);
                ConferirVida(Lista_Inimigos[i], &Jogador);
                if (Lista_Inimigos[i]->getVida() == 0)
                {
                    Lista_Inimigos.erase(Lista_Inimigos.begin());
                    Jogador.SubirdeNivel(Lista_Inimigos[i]->getEXP());
                }

                if (Jogador.getVida() == 0)
                {
                    std::cout << "Você perdeu" << std::endl;
                    Pausar();
                    LimparTela();
                    Jogador.ConfiguracoesIniciais();
                    break;
                }

                if (Lista_Inimigos.size() == 0)
                {
                    std::cout << "Você Ganhou" << std::endl;
                    Pausar();
                    LimparTela();
                    Jogador.ConfiguracoesIniciais();
                    break;
                }
                EntreTurnos();
            }
        }
    }

    return 0;
};