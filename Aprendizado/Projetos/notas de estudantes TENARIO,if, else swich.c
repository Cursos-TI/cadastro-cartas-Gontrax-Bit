#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

float Matematica, Geografia, Portugues, media, nota;
int menu;

printf("***Boletim Eletronico***\n Selecione uma das opções\n");
printf("1. Calculo da média de notas\n");
printf("2. Verificar aprovação\n");
scanf("%d", &menu);


switch (menu)
{
case 1:
    printf("Digite sua nota em Matematica\n");
    scanf("%f", &Matematica);
    printf("Digite sua nota em Portugues\n");
    scanf("%f", &Portugues);
    printf("Digite sua nota em Geografia\n");
    scanf("%f", &Geografia);

if ((Matematica >= 0 && Matematica <= 10) && (Portugues >= 0 && Portugues <= 10) && (Geografia >= 0 && Geografia <= 10)) //verificação para que nao entre valores alem de 0 e 10
{
    printf("Dados corretos... iniciando calculo de média\n");

    media = (Portugues + Matematica + Geografia) / 3;

    printf("A media das notas do aluno foi %.2f\n", media);
}else{printf("Dados incorretos, favor inserir numeros de 0 a 10\n");}



    break;

case 2:
    printf("Digite a sua média de notas:\n");
    scanf("%f", &media);
   
    media >= 6 ? printf("Aprovado!\n") : printf ("Reprovado!\n"); //utilizando operadoes ternarios


    break;

default:
printf("Opção invalida, escolha uma das duas anteriores:\n");
    break;
}






}