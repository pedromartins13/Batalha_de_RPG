#include "../lib/Classe.hpp"
#include "../lib/Personagem.hpp"
#include "../lib/Interface.hpp"
#include "../lib/Inimigos.hpp"
#include "../lib/Turno.hpp"
#include "../lib/Mochila.hpp"
#include "../lib/Itens.hpp"
#include <vector>

int opcaoMenu = 0;
int main()
{
    Classe Mago("Mago");
    Classe Guerreiro("Guerreiro");
    Classe Ladino("Ladino");

    Pocao _pocao;
    Mochila _Mochila(2, &_pocao, 2, &_pocao, 2, &_pocao);

    Personagem Jogador = Criar_Personagem(&Mago, &Guerreiro, &Ladino, &_Mochila);

    LimparTela();

    while (1)
    {
        opcaoMenu = menuInicial();
        LimparTela();

        std::vector<Inimigos *> Lista_Inimigos;
        std::vector<Inimigos *>::iterator it;

        Inimigos Goblin("Goblin", &Guerreiro);
        Inimigos Zumbi("Zumbi", &Guerreiro);
        Inimigos Bruxa("Bruxa", &Mago);
        Inimigos Aranha_Mutante("Aranha_Mutante", &Mago);
        Inimigos Assassino("Assassino", &Ladino);
        Inimigos Arqueiro("Arqueiro", &Ladino);

        Lista_Inimigos.push_back(&Goblin);
        Lista_Inimigos.push_back(&Zumbi);
        Lista_Inimigos.push_back(&Bruxa);
        Lista_Inimigos.push_back(&Aranha_Mutante);
        Lista_Inimigos.push_back(&Assassino);
        Lista_Inimigos.push_back(&Arqueiro);

        Pausar();

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

                    Jogador.getMochila()->adicionarItens(&_pocao, 2);

                    std::cout << Jogador.getNome() << " recebeu 2 Poções de Cura, Mana e Stamina" << std::endl;
                    Pausar();
                }

                if (Lista_Inimigos[i]->getNome() == "Dragao")
                {
                    LutaFinal(Lista_Inimigos[i], &Jogador);
                }
                

                if (Jogador.getVida() == 0)
                {
                    LimparTela();
                    std::cout << "Você perdeu" << std::endl;
                    Pausar();
                    LimparTela();
                    Jogador.ConfiguracoesIniciais();
                    break;
                }

                if (Lista_Inimigos.size() == 0)
                {
                    LimparTela();
                    std::cout << "Você Ganhou" << std::endl;
                    Pausar();
                    LimparTela();
                    Jogador.ConfiguracoesIniciais();
                    break;
                }
                EntreTurnos(&Jogador);
            }
        }
    }

    return 0;
};