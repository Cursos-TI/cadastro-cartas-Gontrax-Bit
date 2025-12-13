#include <stdio.h>

int main(){

    int numero;


    printf("Qual o numero ?\n");
    scanf("%d", &numero);

if (numero == 0)
{printf("O numero é = 0\n");}

else if (numero < 0)
 { if (numero % 2 == 0)
   {printf("O numero é MENOR que ZERO e PAR\n");}

   else{printf("O numero é MENOR que ZERO e IMPAR\n");}
   }

 else if (numero > 0)
 { if (numero % 2 == 0)
   {printf("O numero é MAIOR que ZERO e PAR\n");}

   else{printf("O numero é MAIOR que ZERO e IMPAR\n");}
 }






} 