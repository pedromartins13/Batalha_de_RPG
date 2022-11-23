#include "../lib/Interface.hpp"

Personagem Criar_Personagem()
{
    Classe Mago("Mago");
    Classe Guerreiro("Guerreiro");
    Classe Ladino("Ladino");

    std::string nome, historia;

    std::cout << "Batalha" << std::endl;

    std::cout << "Qual o seu nome?" << std::endl;
    std::cin >> nome;

    std::cout << "Qual a sua história" << std::endl;
    std::cin >> historia;

    Classe Escolha;

    int parada = 0;
    int escolha = 0;
    while (parada == 0)
    {
        std::cout << "Escolha o número da sua Classe:" << std::endl;
        std::cout << "1 - Mago" << std::endl
                  << "2 - Guerreiro" << std::endl
                  << "3 - Ladino" << std::endl;

        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            Escolha = Mago;
            parada = 1;
            break;
        case 2:
            Escolha = Guerreiro;
            parada = 1;
            break;
        case 3:
            Escolha = Ladino;
            parada = 1;
            break;
        default:
            std::cout << "O número não foi escolhido corretamente, escolha novamente:";
            parada = 0;
            break;
        }
    }

    Personagem Jogador(nome, historia, 5, 5, 5, 5, &Escolha);

    std::cout << "Fim" << std::endl;

    return Jogador;
};