#include "../lib/Turno.hpp"
#include "../lib/Interface.hpp"
#include "../lib/Robo.hpp"

void Luta(Inimigos *_inimigo, Personagem *_jogador)
{
    std::cout << _inimigo->getNome() << " VS " << _jogador->getNome() << std::endl;

    int vida_inimigo = _inimigo->getVida();

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
                std::cout << std::endl
                          << _jogador->getNome() << " ";
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_1());
                std::cout << "em " << _inimigo->getNome() << std::endl;
                _inimigo->setVida(vida_inimigo);
                Pausar();
                parada = 1;
                break;
            case 2:
                std::cout << std::endl
                          << _jogador->getNome() << " ";
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_2());
                std::cout << "em " << _inimigo->getNome() << std::endl;
                _inimigo->setVida(vida_inimigo);
                Pausar();
                parada = 1;
                break;
            case 3:
                std::cout << std::endl
                          << _jogador->getNome() << " ";
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_3());
                std::cout << "em " << _inimigo->getNome() << std::endl;
                _inimigo->setVida(vida_inimigo);
                Pausar();
                parada = 1;
                break;
            case 4:
                std::cout << std::endl
                          << _jogador->getNome() << " ";
                vida_inimigo = vida_inimigo - (_jogador->getClasse()->Ataque_4());
                std::cout << "em " << _inimigo->getNome() << std::endl;
                _inimigo->setVida(vida_inimigo);
                Pausar();
                parada = 1;
                break;

            default:
                LimparTela();
                std::cout << "Escolha errada" << std::endl;
                break;
            }
        }

        if (_inimigo->getVida() <= 0)
        {
            _inimigo->setVida(0);
            LimparTela();
            break;
        }
        else if (_jogador->getVida() <= 0)
        {
            _jogador->setVida(0);
            LimparTela();
            break;
        }

        TurnoRobo(_inimigo, _jogador);

        LimparTela();
    }
};

void ConferirVida(Inimigos *_inimigo, Personagem *_jogador)
{
    if (_inimigo->getVida() <= 0)
    {
        _inimigo->setVida(0);
        LimparTela();
    }
    else if (_jogador->getVida() <= 0)
    {
        _jogador->setVida(0);
        LimparTela();
    }
}

void EntreTurnos()
{
    int parada = 0;
    while (parada == 0)
    {
        std::cout << "Você venceu a batalha, escolha a próxima opção:" << std::endl;
        std::cout << "1 - Continuar" << std::endl
                  << "2 - Abrir a Mochila" << std::endl;

        int escolha;
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            parada = 1;
            LimparTela();
            Pausar();
            std::cout << "Próxima batalha" << std::endl;
            Pausar();
            break;
        case 2:
            parada = 1;
            Pausar();
            LimparTela();
            std::cout << "Em andamento" << std::endl;
            Pausar();
            break;
        default:
            break;
        }
    }

    LimparTela();
}
