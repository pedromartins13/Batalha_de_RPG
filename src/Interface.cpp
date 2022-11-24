#include "../lib/Interface.hpp"

Personagem Criar_Personagem(Classe *_Mago, Classe *_Guerreiro, Classe *_Ladino)
{

    std::string nome, historia;

    std::cout << "Bem vindo(a) a Batalha RPG, vamos começar criando o seu personagem:" << std::endl;

    std::cout << "Qual o seu nome?" << std::endl;
    std::cin >> nome;

    std::cout << "Qual a sua história, de onde você veio?" << std::endl;
    std::cin >> historia;

    Classe *Escolha;

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
            Escolha = _Mago;
            parada = 1;
            break;
        case 2:
            Escolha = _Guerreiro;
            parada = 1;
            break;
        case 3:
            Escolha = _Ladino;
            parada = 1;
            break;
        default:
            std::cout << "O número não foi escolhido corretamente, escolha novamente:";
            parada = 0;
            break;
        }
    }

    Personagem Jogador(nome, historia, 5, 5, 5, 5, Escolha);

    return Jogador;
};

int menuInicial()
{
    int parada = 0;
    while (parada == 0)
    {
        std::cout << "Escolha uma opção" << std::endl;
        std::cout << "1 - Começar" << std::endl
                  << "2 - Configurações" << std::endl
                  << "3 - Créditos" << std::endl;

        int escolha;
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            return 1;
            parada = 1;
            break;
        case 2:
            return 2;
            parada = 1;
            break;
        case 3:
            return 3;
            parada = 1;
            break;
        default:
            break;
        }
    }
    return 0;
};

void LimparTela()
{
    int teste = system("clear");
    if(teste == -1)
        std::cout << "Erro ao limpar a tela" << std::endl;
    
}
