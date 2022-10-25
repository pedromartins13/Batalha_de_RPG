## Histórias de Usuários
    
## 1. Criação de Classes

 Como um jogador, eu quero poder escolher uma classe de personagem para enfrentar as batalhas;

### Critérios de Aceitação
- Exibir todas as classes na tela;
- Ter mais de uma classe de personagem;
- Cada classe ter atributos diferentes;

## 2. Evolução

Como um jogador, eu quero poder evoluir meu personagem para enfrentar inimigos mais fortes;

### Critérios de Aceitação
- Poder distribuir pontos em cada atributo;
- Aparecer na tela que o lvl foi upado;

## 3. Ataque por turnos

Como um jogador, eu quero poder atacar entre turnos os meus oponentes para derrotá-los;

### Critérios de Aceitação
- Mostrar possíveis ataques que podem ser feitos no turno;
- Mostrar uma mensagem dizendo quando é o turno do jogador;
- Alterar o turno ao selecionar um ataque

## 4. Defesa

Como um jogador, eu quero melhorar minha defesa para sobreviver aos ataques dos meus oponentes;

### Critérios de Aceitação

- Receber menos dano após melhorar a defesa;
- Perceber que o personagem está recebendo menos dado ao ser atacada pelo mesmo oponente;

## 5. Dificuldade

Como um jogador, eu quero escolher a dificuldade com a qual vou jogar o jogo para escolher se quero ser desafiado ou não;

### Critérios de Aceitação
- Ao alterar a dificuldade perceber que está dando mais dano nos oponentes;
- Ao alterar a dificuldade perceber que está recebendo menos dano nos oponentes;

## 6. Utilização de Itens

Como um jogador, eu quero utilizar itens que possam me dar efeitos durante a batalha para ter melhores chances de enfrentar meus inimigos;

### Critérios de Aceitação
- Receber uma mensagem quando o item for utilizado;
- Ver que a mochila está com um item a menos;

## 7. Tipos de Ataque

Como um jogador, eu quero poder atacar de acordo com a classe que eu escolhi jogar no ínicio do jogo para dar sentido à minha escolha e à maneira como eu pretendo jogar o game;

### Critérios de Aceitação
- Mostrar na tela os ataques específicos de cada classe;
- Ter danos diferentes de acordo com cada ataque, onde cada inimigo tem fraqueza de acordo com a classe escolhida;

## 8. Armazenamento de Itens

Como um jogador, eu quero ter uma mochila para guardar todos os meus itens;

### Critérios de Aceitação
- Ter uma aba no menu apenas para a mochila;
- Ao selecionar a mochila mostrar todos os itens que estão dentro dela;
- Poder escolher entre os itens da mochila;

## 9. Tela de Derrota ou Vitória
Como um jogador, eu quero conseguir observar visualmente se eu venci ou perdi a batalha para entender se eu tive sucesso ou não na batalha;

### Critérios de Aceitação
- Ver no console a mensagem de vitória ou derrota;

## 10. Chance de Crítico
Como um jogador, eu quero poder ter uma chance de dar dano crítico ao atacar meus oponentes para deixar o combate mais dinâmico;

### Critérios de Aceitação
- Ver uma mensagem no console se o acerto foi crítico ou não;
- Ver o dano a mais causado no oponente;


## Cartão CRC

<div>
<table border="1">
    <tr>
        <td colspan="2">Classe: Classe_Personagem</td>
    </tr>
    <tr>
        <td colspan="2">Subclasses: Mago, Guerreiro, Ladino</td>
    </tr>
    <tr>
        <td>Responsabilidades:</td>
        <td>Colaborações:</td>
    </tr>
    <tr>
        <td>Ataque</td>
        <td>Personagem</td>
    </tr>
    <tr>
        <td>Vida</td>
        <td>Personagem</td>
    </tr>
    <tr>
        <td>Defesa</td>
        <td>Personagem</td>
    </tr>
    <tr>
        <td>Destreza</td>
        <td>Personagem</td>
    </tr>
    <tr>
        <td>Itens</td>
        <td>Mochila</td>
    </tr>
</table>

<table border="1">
    <tr>
        <td colspan="2">Classe: Mago</td>
    </tr>
    <tr>
        <td>Responsabilidades:</td>
        <td>Colaborações:</td>
    </tr>
    <tr>
        <td>Ataque Especial</td>
    </tr>
</table>
<table border="1">
    <tr>
        <td colspan="2">Classe: Guerreiro</td>
    </tr>
    <tr>
        <td>Responsabilidades:</td>
        <td>Colaborações:</td>
    </tr>
    <tr>
        <td>Ataque Especial</td>
    </tr>
</table>
<table border="1">
    <tr>
        <td colspan="2">Classe: Ladino</td>
    </tr>
    <tr>
        <td>Responsabilidades:</td>
        <td>Colaborações:</td>
    </tr>
    <tr>
        <td>Ataque Especial</td>
    </tr>
</table>
 </div>
