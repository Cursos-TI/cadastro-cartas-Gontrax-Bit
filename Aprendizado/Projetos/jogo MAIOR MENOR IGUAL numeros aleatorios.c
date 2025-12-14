#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    int opcao, numero;
    int operador, computador;

    printf("***JOGO <  >  =***\n");
    printf("1. Iniciar Jogo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Insira um numero:\n");
        scanf("%d", &numero);

        srand(time(0));
        computador = rand() % 100 + 1;

        printf("Voce acha que esse numero é:\n");
        printf("1. Maior que o da maquina\n");
        printf("2. Menor que o da maquina\n");
        printf("1. Igual ao da maquina\n");
        scanf("%d", &operador);

    switch (operador)


    {
    case 1:
        numero > computador ? printf("O seu numero %d é MAIOR que o da maquina %d VOCE GANHOU\n", numero, computador) : printf("O seu numero %d é MENOR que o da maquina %d VOCE PERDEU\n", numero, computador);
        break;

    case 2:
        numero < computador ? printf("O seu numero %d é MENOR que o da maquina %d VOCE GANHOU\n", numero, computador) : printf("O seu numero %d é MAIOR que o da maquina %d VOCE PERDEU\n", numero, computador);
        break;

    case 3:
               
         if (numero == computador)
         {
            printf("O seu numero %d é IGUAL ao da maquina %d VOCE GANHOU\n", numero, computador);
         }else if (numero < computador)
         {
            printf("O seu numero %d é MENOR que o da maquina %d VOCE PERDEU\n", numero, computador);
         }else if (numero > computador)
         {
            printf("O seu numero %d é MAIOR que o da maquina %d VOCE PERDEU\n", numero, computador);
         }
        
        break;
    
    default:
        break;
    }


        
       

        

    
        break; //case 1
    
    default:
        break; //default
    }

    














}