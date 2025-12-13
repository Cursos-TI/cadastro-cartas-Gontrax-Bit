#include <stdio.h>

int main() {

int idade1, idade2;



printf("Qual sua idade ?\n");
scanf("%d", &idade1);


if (idade1 <= 11) 
{printf("Sua faixa etaria é de uma criança\n");} 
else if (idade1 >= 12 && idade1 <= 20)
{printf("Sua faixa etaria é de um adolecente\n");}
else if (idade1 >= 21 && idade1 <= 59)
{printf("Sua faixa etaria é de um adulto\n");}
else
{printf("Sua faixa etaria é de um idoso\n");}


return 0;
    
}