#include <stdio.h>

int main() {

    //variaveis

float Portugues, Matematica, Geografia;
float media, nota, nota1, nota2;
char nome[10];


//Portugues = 6.5;

//Matematica = 8;

//Geografia = 7.5;

// inicio do codigo

printf("Qual o nome do aluno ? \n");
scanf("%s", &nome);

printf("Qual foi a nota em Portugues ? \n");
scanf("%f", &Portugues);

printf("Qual foi a nota em Matematica ? \n");
scanf("%f", &Matematica);

printf("Qual foi a nota em Geografia ? \n");
scanf("%f", &Geografia);

nota = Portugues + Matematica + Geografia;

media = nota / 3;

printf("A media das notas do aluno foi %.2f\n", media);









}