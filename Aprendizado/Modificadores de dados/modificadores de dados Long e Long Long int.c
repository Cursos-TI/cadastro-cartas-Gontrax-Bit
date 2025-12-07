#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647; //aumenta e muito o tamanho do numero
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber); //vira %ld para o long long fica %lld,
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}