#include <stdio.h>

int main() {

char variavel;

printf("Digite um numero\n");
    scanf("%c", &variavel);



switch (variavel) {
  case 'a': //precisa ser colocado aspas simples ' nao a ""
    printf(" A variavel é = a\n");

    break;

  case 'b':
    printf(" A variavel é = abc\n");

    break;
  
  case 'c':
    printf(" A variavel é = samuel\n");

    break;

    default:

    printf(" A variavel nao é nenhuma das anteriores\n");
}





}