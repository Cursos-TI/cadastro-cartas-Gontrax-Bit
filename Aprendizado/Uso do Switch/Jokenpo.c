#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {


int opcao, regras;
int computador, palpite, pedra, papel, tesoura;

//pedra = 1;
//papel = 2;
//tesoura = 3;

printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Guia\n");
printf("3. Regras\n");
printf("4. Sair\n");
printf("Escolha uma opção:");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
printf("O jogo esta sendo iniciado\n");

printf("Selecione uma opção\n");
printf("1 = Pedra\n");
printf("2 = Papel\n");
printf("3 = Tesoura\n");
scanf("%d", &palpite);


srand(time(0));
computador = rand() % 3 + 1;

if (computador == 1)
{
    printf("A maquina escolheu PEDRA!\n");
if (palpite == 1)
{
    printf("Voce escolheu PEDRA\n");
    printf("EMPATE, ambos escolheram PEDRA\n");
    
}
else if (palpite == 2)
{
    printf("Voce escolheu PAPEL\n");
    printf("VOCE GANHOU, PARABENS\n");
}
else if (palpite == 3)
{
    printf("Voce escolheu TESOURA\n");
    printf("VOCE PERDEU, TENTE NOVAMENTE\n");
}

}
else if (computador == 2)
{
    printf("A maquina escolheu PAPEL!\n");
    if (palpite == 1)
    {
        printf("Voce escolheu PEDRA\n");
        printf("VOCE PERDEU, TENTE NOVAMENTE\n");
    }
    else if (palpite == 2)
    {
        printf("Voce escolheu PAPEL\n");
        printf("EMPATE, ambos escolheram PAPEL\n");
    }
    else if (palpite == 3)
    {
        printf("Voce escolheu TESOURA\n");
        printf("VOCE GANHOU, PARABENS");
    }
    
    
    
}
else if (computador == 3)
{
    printf("A maquina escolheu TESOURA!\n");
    if (palpite == 1)
    {
        printf("Voce escolheu PEDRA\n");
        printf("VOCE GANHOU, PARABENS");
    }
    else if (palpite == 2)
    {
        printf("Voce escolheu PAPEL\n");
        printf("VOCE PERDEU, TENTE NOVAMENTE\n");
    }
    else if (palpite == 3)
    {
        printf("Voce escolheu TESOURA\n");
        printf("EMPATE, ambos escolheram TESOURA\n");
    }
    
}

break;



case 2:
    printf("Guia:\n");

    printf("Selecione uma das opções:\n");
    printf("1 para PEDRA\n");
    printf("2 para PAPEL\n");
    printf("3 para TESOURA\n");

    break;

case 3:
    printf("Estas sao as regras:\n");
    printf("PEDRA ganha de TESOURA e perde para PAPEL:\n");
    printf("PAPEL ganha de PEDRA e perde para TESOURA:\n");
    printf("TESOURA ganha de PAPEL e perde para PEDRA:\n");
    printf("Escolhas iguais geram EMPATE:\n");

    break;

case 4:
    printf("Aplicação Finalizada:\n");


    break;

default:
    printf("Opção invalida selecione uma das 4 anteriores\n");
    break;
}














}