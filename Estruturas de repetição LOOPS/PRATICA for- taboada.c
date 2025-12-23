#include <stdio.h>

//FOR recomendado como se sabe o inicio e o fim como A TABOADA


int main() {

int numero, i; //nesse exemplo vou deixar a variavel fora

printf("Digite um numero para calcularmos a taboada\n");
scanf("%d", &numero);

for (i = 0; i <= 10; i++) //(inicialização i = 0;condição i <= 10; incremento i++)
{
    printf("%d x %d = %d\n", i, numero, i*numero);//i*numero = resultado.
}

//nesse caso o LOOP é do i que ira de 0 a 10, a variavel numero o usuario ira decidir 
//qual é o numero

}