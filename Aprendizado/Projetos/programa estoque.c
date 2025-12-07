#include <stdio.h>;

// area para variaveis

int main() {


//char estado[20] = "A";
//int codigo;
//codigo = 01;
//printf("o nome da carta é %s%d\n", estado, codigo);


char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;

unsigned int estoqueB = 2000;

float valorA = 10.50;

float valorB = 20.40;

unsigned int estoqueMinimoA = 500;

unsigned int estoqueMinimoB = 2500;

double valorTotalA;  //aqui se trabalha com double pois podem ser numeros maiores
double valorTotalB;

int resultadoA, resultadoB; // armazenar a comparação dos estoques

printf ("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);

printf ("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);


// Comparaçao com o valor minimo do estoque

resultadoA = estoqueA > estoqueMinimoA;

resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);

printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

//comparacoes entre valores

resultadoA = estoqueA * valorA;

resultadoB = estoqueB * valorB;

printf("O valor de A (R$ %d) é maior que o valor de B(R$ %d) ?: %d\n",resultadoA, resultadoB, (resultadoA) > (resultadoB));



}