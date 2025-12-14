#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

int opcao, regras;
int numeroSecreto, palpite;

printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Regras\n");
printf("Escolha uma opção:");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
srand(time(0));//faz com que o numero realmente seja aleatorio, pois reinicializa o tempo do gerador
numeroSecreto = rand() % 10;

    printf("Digite um numero entre 0 e 9\n");
    scanf("%d", &palpite);
    if (numeroSecreto == palpite)
    {
        printf("VOCE ACERTOU!\n");
        printf("Numero secreto %d\n", numeroSecreto);
    }
    else{printf("VOCE ERROU, TENTE NOVAMENTE\n");
    printf("Numero secreto %d\n", numeroSecreto);}
    

    break;
case 2:
    printf("Guia:\n");
    printf("Selecione um numero entre 0 e 9\nO computador ira gerar um numero aleatorio\nE vera se acertou ou nao\n");
    break;


//case 3 com mais exemplos de camadas do switch, menus dentro de menus

case 3: 
    printf("Digite qual regra deseja saber a respeito\n");
    printf("1. Regras online\n");
    printf("2. Regras offline\n");
    scanf("%d", &regras);

    switch (regras)
    {
    case 1:
        printf("Regras online sao....\n");
        break;
    
    case 2:
        printf("Regras offline sao....\n");

        break;

    default:
        break;
    }
    break;

default:
    printf("Opção invalida selecione uma das 3 anteriores\n");
    break;




}

}