#include <stdio.h>
//#include <string.h>

int main (){

    char estado[10];
    char cod_carta[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pon_turistico;
    char estado2[10];
    char cod_carta2[10];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pon_turistico2;
    //int idade;
   // int matricula;
   // float altura;
  //  char nome[100];

    printf("Desafio nível novato: \n\n");
    printf("Cadastro da primeira Carta: \n\n");

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta);
 
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%i", &pon_turistico);

    printf("\n\n");

    printf("Cadastro da Segunda Carta: \n\n");

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta2);
 
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%i", &pon_turistico2);

    printf("\n\n");

    printf("Carta 1: \n\n");

    printf("Nome da cidade: %s \n", nome_cidade);
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cod_carta);    
    printf("População: %i \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %i \n", pon_turistico);

    printf("\n\n");

    printf("Carta 2: \n\n");

    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cod_carta2);    
    printf("População: %i \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %i \n", pon_turistico2);



   // printf("A matricula é: %d \n", matricula);
   // printf("%s \n", nome);
   // printf("%d \n", idade);
  //  printf("%.2f \n", altura); 



    return 0;
}

