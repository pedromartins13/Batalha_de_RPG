#include "../lib/Turno.hpp"
#include "../lib/Interface.hpp"
#include "../lib/Robo.hpp"

void Luta(Inimigos *_inimigo, Personagem *_jogador)
{
    std::cout << _inimigo->getNome() << " VS " << _jogador->getNome() << std::endl;

    int vida_inimigo = _inimigo->getVida();
    int vida_jogador = _jogador->getVida();

    for (int i = 1;; i++)
    {
        LimparTela();
        int escolha = 0;
        int parada = 0;
        std::cout << "Turno: " << i << std::endl;
        std::cout << "Vida do " << _inimigo->getNome() << ": " << _inimigo->getVida() << std::endl;
        std::cout << "Vida do " << _jogador->getNome() << ": " << _jogador->getVida() << std::endl;

        while (parada == 0)
        {
            std::cout << "Escolha seu ataque:" << std::endl;

            _jogador->getClasse()->listarAtaques();
            std::cin >> escolha;
            switch (escolha)
            {
            case 1:
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_1());
                _inimigo->setVida(vida_inimigo);
                parada = 1;
                break;
            case 2:
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_2());
                _inimigo->setVida(vida_inimigo);
                parada = 1;
                break;
            case 3:
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_3());
                _inimigo->setVida(vida_inimigo);
                parada = 1;
                break;
            case 4:
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_4());
                _inimigo->setVida(vida_inimigo);
                parada = 1;
                break;

            default:
                LimparTela();
                std::cout << "Escolha errada" << std::endl;
                break;
            }
        }
        TurnoRobo(_inimigo, _jogador);
        LimparTela();

        if (vida_inimigo <= 0)
        {
            _inimigo->setVida(0);
            LimparTela();
            break;
        }
        else if (vida_jogador <= 0)
        {
            _jogador->setVida(0);
            LimparTela();
            break;
        }
        LimparTela();
    }
};
