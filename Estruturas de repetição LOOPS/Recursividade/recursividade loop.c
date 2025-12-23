#include <stdio.h>

//recursividade trabalhar preferencialmente com decremento -- 
void recursivo(int numero){//variavel numero so fica fora
    if (numero > 0)//condiçao da recursividade
    {
        printf("%d\n", numero);//sequiser crescente basta inverter, o print primeiro que o recursivo

        recursivo(numero - 1);//precisa chamar o codigo recursivo
    }
    
}

int main() {

int quantidade = 10;

printf("Contagem regressiva...\n");
recursivo(quantidade);// nessa parte se passa para o recursivo a quantidade de vezes que quer que ele execute, com base no valor
//da variavel "quantidade"





}