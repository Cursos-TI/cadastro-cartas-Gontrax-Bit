#include <stdio.h>

int main(){

int opcao;
float saldo = 1000, deposito, saque;

printf("ESCOLHA UMA OPÇÃO\n");
printf("Digite 1 para Verificar saldo\n");
printf("Digite 2 para Deposito\n");
printf("Digite 3 para Saque\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("O seu saldo é de: R$ %.0f\n", saldo);

    break;

case 2:
    printf("Qual valor deseja depositar ?\n");
    scanf("%f", &deposito);
    printf("Deposito de R$%.0f realizado com sucesso\n", deposito);

    break;

case 3:
    printf("Qual valor deseja sacar ?\n");
    scanf("%f", &saque);
    printf("Saque de R$%.0f realizado com sucesso\n", saque);

    break;

default:
printf("Opção invalida, tente novamente 1, 2 ou 3\n");


    break;
}



}