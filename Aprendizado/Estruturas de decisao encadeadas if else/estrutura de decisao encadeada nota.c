#include <stdio.h>

int main() {

int nota;

printf("Digite a sua nota:\n");
scanf("%d", &nota);

//A >= 90
//B >= 80
//C >= 70
//D >= 60
//F

if (nota >= 90) 
{printf("Sua nota é A, Parabens!\n");}
else if (nota >= 80)
{printf("Sua nota é B, Otimo!\n");}
else if (nota >= 70)
{printf("Sua nota é C, Podemos melhorar!\n");}
else if (nota >= 60)
{printf("Sua nota é D, Se esforce um pouco mais!\n");}
else
{printf("Sua nota é F, Precisa se esforçar");}

return 0;



}