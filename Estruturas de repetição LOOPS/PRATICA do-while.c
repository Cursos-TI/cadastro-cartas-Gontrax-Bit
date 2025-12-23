#include <stdio.h>

int main() {

int numero;


do
{
    printf("Digite um numero par\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) //nesse caso é para numeros pares  

    {
        printf("%d Este numero é par\n", numero);
    
    }else printf("%d Este numero é impar, digite um numero PAR\n", numero);
    

} while (numero % 2 != 0); // condição para que venha resultados impares, para pares seria ==, a ! é uma negação 

printf("Numero Par digitado, saindo do programa\n");

//aqui eu criei uma repetição em que o ciclo so se fecha se um numero par for digitado, caso nao seja, o loop continua 



}