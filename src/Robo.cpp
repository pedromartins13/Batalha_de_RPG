#include "../lib/Robo.hpp"
#include "../lib/Interface.hpp"

int numeroAleatorio(int menor, int maior)
{
    srand((unsigned)time(0));
    return rand() % (maior - menor + 1) + menor;
};

void TurnoRobo(Inimigos *_inimigo, Personagem *_jogador)
{
    int parada = 0;
    int escolha = numeroAleatorio(1, 4);
    int vida_jogador = _jogador->getVida();

    while (parada == 0)
    {

        switch (escolha)
        {
        case 1:

            std::cout << std::endl
                      << _inimigo->getNome() << " ";
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_1());
            std::cout << "em " << _jogador->getNome() << std::endl;
            _jogador->setVida(vida_jogador);
            Pausar();
            parada = 1;
            break;
        case 2:
            std::cout << _inimigo->getNome() << " ";
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_2());
            std::cout << "em " << _jogador->getNome() << std::endl;
            _jogador->setVida(vida_jogador);
            Pausar();
            parada = 1;
            break;
        case 3:
            std::cout << _inimigo->getNome() << " ";
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_3());
            std::cout << "em " << _jogador->getNome() << std::endl;
            _jogador->setVida(vida_jogador);
            Pausar();
            parada = 1;
            break;
        case 4:
            std::cout << _inimigo->getNome() << " ";
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_4());
            std::cout << "em " << _jogador->getNome() << std::endl;
            _jogador->setVida(vida_jogador);
            Pausar();
            parada = 1;
            break;

        default:
            LimparTela();
            std::cout << "Escolha errada" << std::endl;
            break;
        }
    }
    LimparTela();
};