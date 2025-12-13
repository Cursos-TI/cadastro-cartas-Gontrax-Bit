#include <stdio.h>

int main() {


// deve ter mais de 60 anos, ou menos de 18 anos, e ter uma renda mensal abaixo de 2000

int idade, renda, dependentes;



printf("Qual sua idade ?\n");
scanf("%d", &idade);

printf("qual sua renda ?\n");
scanf("%d", &renda);

printf("qual a quantidade de dependentes ?\n");
scanf("%d", &dependentes);


if (idade >= 60 || idade <= 18)
{
 if (renda <= 2000)
 {
    if (dependentes >= 2)
    {
       printf("Voce tem direito ao beneficio\n");
    }
    else{printf("Voce nao tem direito ao beneficio devido numero de dependentes\n");}
   
 }
 else {printf("Voce nao tem direito ao beneficio devido a renda\n");}

}
else{printf("Voce nao tem direito ao beneficio devido a idade\n");}





    
}