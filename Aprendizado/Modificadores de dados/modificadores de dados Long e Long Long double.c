#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793; // muito mais preciso que INT
    long double veryPreciseNumber = 3.14159265358979323846; // com e sem o long fica normal

 
    printf("Número preciso (double): %.15f\n", preciseNumber); // sinaliza a quantidade de casas decimais
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber); //voce pode tirar o l do especificador
 
    return 0;
}