#include <stdio.h>

int main() {

int idade = 16, resultado;


//idade >= 18 ? printf("Voce é maior de idade!\n") : printf("Voce é menor de idade\n");


//tambem pode ser escrito armazenando o dado em uam variavel

resultado = idade >= 18 ? 1 : 0; //indica que a idade se for maior verdadeiro, se for menor falso

if (resultado == 1)
{
   printf("Voce é maior de idade!\n");
}
else {printf("Voce é menor de idade\n");}



}