#include <stdio.h>

int main() {

int estoque, monitoramento;

printf("Quantos produtos ainda tem no estoque ?\n");
scanf("%d", &estoque);


if (estoque > 5) 
{printf("O estoque esta bom!\n");} 
else
if (estoque < 5) 
{printf("O estoque esta abaixo do limite, comprar mais produtos\n");}
else
{printf("O estoque esta no limite\n");}





}