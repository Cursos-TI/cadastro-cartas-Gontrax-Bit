#include <stdio.h>

int main() {

int i, j;
char letra;

for (i = 1; i <= 5; i++)
{   
    letra = 'A';//caracteres usam aspas simples
    for (j = 1; j <= i; j++)//o loop interno é flexivel, o externo que define a quantidade de loop, por isso ele vai aumentar de acordo com o externo
    {
        printf("%c ", letra);
        letra++;
    }

    printf("\n");//print para organização 
    
}

//o primneiro loop define a quantidade de vezes,  o segundo incrementa e define a letra


}

