#include <stdio.h>

int main() {
  int num1 = 30, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2; // parenteses da a precedencia 

  printf("O maior número é: %d\n", maior);

  return 0;
}