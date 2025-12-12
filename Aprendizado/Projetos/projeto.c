#include <stdio.h>

int main() {


//area de variaveis

int retorno, desligamento1, desligamento2;


desligamento1 = 45;


printf("Em qual dia o colaborador retornou ?: \n");
scanf("%d", &retorno);

desligamento2 = 31 - retorno;

printf("Desligamento possivel: %d\n", desligamento1 - desligamento2);







}