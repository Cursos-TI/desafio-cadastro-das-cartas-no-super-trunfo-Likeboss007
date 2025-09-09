#include <stdio.h>

int main() {
printf("========================================================\n");
printf("CARTAS SUPER TRUNFO\n");
printf("Desenvolvido Por Maicon Douglas 2025\n");
printf("Versão 1.0\n");
printf("08/09/2025\n");
printf("Descrição: Jogo de cartas Super Trunfo\n");
printf("========================================================\n");

printf("Bem-vindo ao jogo de Cartas Super Trunfo\n");
printf("Neste Jogo, voce ira competir com cartas de diferentes categorias\n");
printf("Cada carta possui atributos que serão essenciais para determinar o vencedor\n");
printf("Prepare se para uma partida emocionante!!!\n");


//Declaração das variáveis para a primeira carta
char estado1, codigo1[10], cidade1[20];
int populacao1, pontos_turisticos1;
float tamanho1, pib1;

//Declaração das variáveis para a segunda carta
char estado2, codigo2[10], cidade2[20];
int população2, pontos_turisticos2;
float tamanho2, pib2;

//Cadastro Primeira Carta
printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");

printf("Digite o Estado: (A-H) \n");
scanf ("%s", &estado1);

printf ("Digite o código da carta: \n");
scanf ("%d", &codigo1);

printf("Digite o nome da cidade (EX: Sao_Paulo): \n");
scanf ("%s", &cidade1);

printf("Digite a população: \n");
scanf("%d", &populacao1);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontos_turisticos1);

printf("Digite o Tamanho: \n");
scanf("%f", &tamanho1);

printf("Digite o pib: \n");
scanf("%f", &pib1);

//Cadastro Segunda Carta
printf("=== CADASTRO DA SEGUNDA CARTA ===\n");

printf("Digite o Estado (A-H): \n");
scanf("%s", &estado2);

printf("Digite o codigo da carta: \n");
scanf("%d", &codigo2);

printf("Digite o nome da cidade (EX: Sao_Paulo): \n");
scanf("%s", &cidade2);

printf("Digite a população: \n");
scanf("%d", &população2);

printf("Digite o numero de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);

printf("Digite o tamanho2: \n");
scanf("%f", &tamanho2);

printf("Digite o pib: \n");
scanf("%f", &pib2);

//Exibição das Informações da Primeira carta
printf(" \n=== CARTA 1 === \n");
printf("Estado1: %s \n", &estado1);
printf("Cidade1: %s \n", &cidade1);
printf("População1: %d \n", &populacao1);
printf("Pontos_turisticos1: %d \n", &pontos_turisticos1);
printf("Area1: %d \n", &tamanho1);
printf("PIB1: %d \n", &pib1);
//Exibição das Informações da Segunda carta
printf(" \n=== CARTA 2 === \n");
printf("Estado2: %s \n", &estado2);
printf("Codigo2: %d \n", &codigo2);
printf("Cidade2: %s \n", &cidade2);
printf("População2: %d \n", &população2);
printf("Pontos_turisticos2: %d \n", &pontos_turisticos2);
printf("tamanho2: %d \n", &tamanho2);
printf("PIB2: %d \n", &pib2);


return 0;
}
