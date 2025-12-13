#include <stdio.h>

int main() {

unsigned int estoque, controleEST;

int umidade, controleUMI;

float temperatura, controleTEMP;

printf ("Qual a temperatura atual ?\n");
scanf ("%f", &temperatura);

printf ("Qual a umidade atual ?\n");
scanf ("%d", &umidade);

printf ("Qual o estoque atual ?\n");
scanf ("%u", &estoque);

controleEST = estoque >= 5000;

controleTEMP = temperatura >= 23.0 && temperatura <= 26.0;

controleUMI = umidade >= 40 && umidade <= 80;

printf ("Temperatura:%.1f°C\n", temperatura);
if (controleTEMP == 1) 
{printf("A temperatura esta ideal\n");} 
else 
{printf("ATENÇÃO temperatura esta fora da faixa ideal\n");}

printf ("Umidade:%d%\n", umidade);
if (controleUMI == 1) 
{printf("A umidade esta ideal\n");} 
else 
{printf("ATENÇÃO umidade esta fora da faixa ideal\n");}

printf ("Estoque:%u Produtos\n", estoque);
if (controleEST == 1) 
{printf("O estoque esta em boa quantidade\n");} 
else 
{printf("ATENÇÃO o estoque esta baixo, comprar produtos\n");}


}