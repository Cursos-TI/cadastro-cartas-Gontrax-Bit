#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
// os dados para carta B tem o 2 na frente


char estado[30], cidade[30], codigo[30];
char estado2[30], cidade2[30], codigo2[30];
int populaçao, populaçao2;
int turismo, turismo2;
float area, pib, superpoder, superpoderemb,densidade, pibpp, densidadeINV, pibemb;
float area2, pib2, superpoder2, superpoderemb2,densidade2, pibpp2, densidadeINV2, pibemb2;
int resultado = 0; 
int jogo;

printf("***JOGO SUPER TRUNFO***\n");
printf("1. Iniciar Jogo\n");
printf("2. Guia\n");
printf("3. Regras\n");
printf("4. Sair\n");
printf("Escolha uma opção das anteriores\n");
scanf("%d", &jogo);





switch (jogo)
{
case 1:
    printf("Insira os dados da CARTA 01\n");

printf("Qual sera o estado: \n");
scanf("%s", &estado);

printf("Qual sera o codigo: \n");
scanf("%s", &codigo);

printf("Qual sera sua cidade: \n");
scanf("%s", &cidade);

printf("Qual sera a populacao: \n");
scanf("%u", &populaçao);

printf("Qual sera a area: \n");
scanf("%f", &area);

printf("Qual sera o PIB: \n");
scanf("%f", &pib);

printf("Qual a quantidade de pontos turisticos: \n");
scanf("%d", &turismo);

//area para calculos dos dados

densidade = populaçao / area;
pibpp = pib / populaçao;
densidadeINV = 1 / densidade;
superpoder = populaçao + area + pib + turismo + pibpp + densidadeINV;
pibemb = pib / 1e9;
superpoderemb = superpoder / 1e9;

printf("Insira os dados da CARTA 02\n");

printf("Qual sera o estado: \n");
scanf("%s", &estado2);

printf("Qual sera o codigo: \n");
scanf("%s", &codigo2);

printf("Qual sera sua cidade: \n");
scanf("%s", &cidade2);

printf("Qual sera a populacao: \n");
scanf("%u", &populaçao2);

printf("Qual sera a area: \n");
scanf("%f", &area2);

printf("Qual sera o PIB: \n");
scanf("%f", &pib2);

printf("Qual a quantidade de pontos turisticos: \n");
scanf("%d", &turismo2);

//area para calculos dos dados

densidade2 = populaçao2 / area2;
pibpp2 = pib2 / populaçao2;
densidadeINV2 = 1 / densidade2;
superpoder2 = populaçao2 + area2 + pib2 + turismo2 + pibpp2 + densidadeINV2;
pibemb2 = pib2 / 1e9;
superpoderemb2 = superpoder2 / 1e9;

// Área para exibição dos dados da carta A

printf("CARTA 01\n");
printf("Estado: %s\n", estado);
printf("Codigo da carta: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d habitantes\n", populaçao);
printf("Area: %6.2f km2\n", area);
printf("PIB: %.2f bilhoes de reais\n", pibemb);
printf("Numero de pontos turisticos: %d\n", turismo);
printf("Densidade Populacional: %.2f hab/km2\n", densidade);
printf("PIB per Capita: %.2f reais\n", pibpp);
printf("Super Poder: %.2f bilhoes\n", superpoderemb);



// Área para exibição dos dados da carta B

printf("CARTA 02\n");
printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d habitantes\n", populaçao2);
printf("Area: %.2f km2\n", area);
printf("PIB: %.2f bilhoes de reais\n", pibemb2);
printf("Numero de pontos turisticos: %d\n", turismo2);
printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpp2);
printf("Super Poder: %.2f bilhoes\n", superpoderemb2);

// area para comparação de cartas

int comparacao;

printf("***COMPARAÇÃO DAS CARTAS***\n");
printf("1. Para comparação automatica\n");
printf("2. Para selecionar quais dados deseja comparar\n");
scanf("%d", comparacao);


switch (comparacao)
{
case 1:
    
printf("***COMPARAÇÃO AUTOMATICA DE CARTAS***\n");

printf("População:\n");   
if (populaçao > populaçao2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (populaçao < populaçao2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}


printf("Area:\n");   
if (area > area2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (area < area2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

printf("PIB:\n");    
if (pibemb > pibemb2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (pibemb < pibemb2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

printf("Pontos Turisticos:\n");
if (turismo > turismo2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (turismo < turismo2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

printf("Densidade Populacional:\n");
if (densidade < densidade2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (densidade > densidade2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

printf("PIB per Capita:\n");
if (pibpp > pibpp2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (pibpp < pibpp2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

printf("Super Poder:\n");
if (superpoderemb > superpoderemb2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (superpoderemb < superpoderemb2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break; //break case 01 comparacao

case 2: // case destinado a selecionar uma opção para comparar
int selecao;

printf("***SELECIONE QUAL DADO DESEJA COMPARAR***\n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Pontos Turisticos\n");
printf("5.Densidade Populacional\n");
printf("6.PIB per Capita\n");
printf("7.Super Poder\n");
scanf("%d", selecao);

switch (selecao)
{
case 1:
    printf("População:\n");   
if (populaçao > populaçao2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (populaçao < populaçao2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}
    break;

case 2:
    printf("Area:\n");   
if (area > area2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (area < area2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break; 

case 3:
    printf("PIB:\n");    
if (pibemb > pibemb2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (pibemb < pibemb2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break;

case 4:
    printf("Pontos Turisticos:\n");
if (turismo > turismo2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (turismo < turismo2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break;

case 5:
    printf("Densidade Populacional:\n");
if (densidade < densidade2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (densidade > densidade2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break;

case 6:
    printf("PIB per Capita:\n");
if (pibpp > pibpp2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (pibpp < pibpp2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break;

case 7:
    printf("Super Poder:\n");
if (superpoderemb > superpoderemb2) 
{printf("CARTA 01 VENCEU!\n");} 
else if (superpoderemb < superpoderemb2)
{printf("CARTA 02 VENCEU!\n");}
else 
{printf("EMPATE\n");}

    break;

default:
    printf("Opção invalida, selecione uma das 7 anteriores\n");
    break;
}

break;//break case 02 comparacao

default:
    printf("Opção invalida, selecione uma das 2 anteriores\n");
    break;

}

    break; // break case 01 inicio

case 2:

printf("***GUIA SUPER TRUNFO***\n");
printf("Insira os dados das cartas de acordo com as informaçoes solicitadas\n");
printf("Estado - Alguma letra do alfabeto A - Z\n");
printf("Codigo da carta - Algum numero de dois digitos 01 - 99\n");
printf("Cidade- Nome de uma cidade\n");
printf("Populacao - A quantidade de habitantes da cidade\n");
printf("Area - A area da cidade\n");
printf("PIB - O PIB da cidade\n");
printf("Numero de pontos turisticos: A quantidade de pontos turisticos da cidade\n");
printf("As demais informaçoes serão calculadas de acordo com as anteriores\n");

printf("Apos inserir os dados das cartas, terá a opção de comparação automatica ou selecionar a opção que deseja comparar\n");
printf("A carta que tiver o percentual maior vence, exceto em densidade populacional que a menor pontuação vence\n");


break; // break case 02 inicio

case 3:

printf("***REGRAS***\n");


break; // break case 03 inicio

case 4:

printf("***FECHANDO APLICAÇÃO***\n");


break; // break case 04 inicio

default:
printf("Opção invalida, selecione uma das 4 anteriores\n");

    break;// break defaut inicio
}





return 0;


} 
