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
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_1());
            _jogador->setVida(vida_jogador);
            parada = 1;
            break;
        case 2:
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_2());
            _jogador->setVida(vida_jogador);
            parada = 1;
            break;
        case 3:
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_3());
            _jogador->setVida(vida_jogador);
            parada = 1;
            break;
        case 4:
            vida_jogador = vida_jogador - (_inimigo->getClasse()->Ataque_4());
            _jogador->setVida(vida_jogador);
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
