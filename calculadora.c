#include <stdio.h>

int main() {



/*
Soma (+)
Sbtração (-)
Multiplicação(*)
Divisao (/)
*/

//area de variaveis

int numero1, numero2;
int soma, subtracao, divisao, multiplicacao;

//leitura de dados

printf ("digite um numero 1: \n");
scanf ("%d", &numero1);

printf ("digite o segundo numero: \n");
scanf ("%d", &numero2);

//area para as operações

soma = numero1 + numero2;

subtracao = numero1 - numero2;

multiplicacao = numero1 * numero2;

divisao = numero1 / numero2;


//resultado
printf ("Resultado da soma: %d\n", soma);
printf ("Resultado da subtracao: %d\n", subtracao);
printf ("Resultado da multiplicacao: %d\n", multiplicacao);
printf ("Resultado da divisao: %d\n", divisao);


}