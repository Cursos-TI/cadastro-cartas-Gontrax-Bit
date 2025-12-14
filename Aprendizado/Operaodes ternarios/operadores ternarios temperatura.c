#include <stdio.h>

int main() {

int temperatura = 29, resultado;

//temperatura >= 30 ? printf("Esta calor\n") : printf("Esta frio\n");  este é o jeito ternario

resultado = temperatura >= 30 ? 1 : 0;

if (temperatura == 1)
{
    printf("Esta calor\n");
}
else{printf("Esta frio\n");}

}