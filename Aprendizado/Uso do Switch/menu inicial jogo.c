#include <stdio.h>

int main() {

int opcao;

printf("Menu Princilap\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opção:");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
    printf("O jogo esta sendo iniciado\n");
    break;
case 2:
    printf("As regras são:\n");
    printf("Evitar palavras de baixo calão\nRespeito\nProibido o uso de programas auxiliares\n");
    break;
case 3:
    printf("Fechando aplicação\n");
    break;

default:
    printf("Opção invalida selecione uma das 3 anteriores\n");
    break;
}









}