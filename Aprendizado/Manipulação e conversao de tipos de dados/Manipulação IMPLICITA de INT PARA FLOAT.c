#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float = 13.5
 
    printf("Resultado: %.1f\n", resultado);
 
    return 0;
}