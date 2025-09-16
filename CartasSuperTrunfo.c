#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // variaveis da carta 1 // 
  
  char estado1[30];
   char codigocarta1[10];
   char cidade1[30];
   int populacao1;
   float areakm1;
   float pib1;
   int pontosdeturismo1;

   //variaveis da carta 2 //

   char estado2[30];
   char codigocarta2[10];
   char cidade2[30];
   int populacao2;
   float areakm2;
   float pib2;
   int pontosdeturismo2;

  //  parte do codigo em que pede ao usuario dados da CARTA 1 usando printf e scanf //usei \n\n para pular 2 linhas
  
  printf("DESAFIO SUPER TRUNFO FANOR \n\n");
   
   printf(" DADOS DA CARTA 1 \n\n");
   
   printf("NOME DO ESTADO: \n");
   scanf("%s", estado1);
   
   printf("CODIGO CARTA: \n");
   scanf("%s", codigocarta1);

   printf("NOME DA CIDADE: \n");
   scanf("%s", cidade1);

   printf("NUMERO POPULAÇÃO: \n");
   scanf("%d", &populacao1);

   printf("AREA EM KM²: \n");
   scanf("%f", &areakm1);

   printf("PIB: \n");
   scanf("%f", &pib1);

  printf("PONTOS TURISTICOS: \n");
  scanf("%d", &pontosdeturismo1); 

  printf("\n\n");

  //  parte do codigo em que pede ao usuario dados da CARTA 2 usando printf e scanf // usei \n\n para pular 2 linhas 

  printf(" DADOS DA CARTA 2 \n\n");
   
   printf("NOME DO ESTADO: \n");
   scanf("%s", estado2);
   
   printf("CODIGO CARTA: \n");
   scanf("%s", codigocarta2);

   printf("NOME DA CIDADE: \n");
   scanf("%s", cidade2);

   printf("NUMERO POPULAÇÃO: \n");
   scanf("%d", &populacao2);

   printf("AREA EM KM²: \n");
   scanf("%f", &areakm2);

   printf("PIB: \n");
   scanf("%f", &pib2);

  printf("PONTOS TURISTICOS: \n");
  scanf("%d", &pontosdeturismo2);

  printf("\n\n");

  // DADOS DA CARTA 1 // PARTE DO CODIGO QUE IMPRIME NA TELA O QUE O USUARIO DIGITOU NA CARTA 1

printf (" CARTA 1 \n");

printf("NOME DO ESTADO: %s \n", estado1);

printf("CODIGO DA CARTA: %s \n", codigocarta1);

printf("NOME DA CIDADE: %s \n", cidade1);

printf("POPULAÇAO: %d \n", populacao1);

printf("AREA EM KM²: %.0f \n", areakm1);

printf("PIB: %.0f\n",pib1);

printf("PONTOS TURISTICOS: %d \n", pontosdeturismo1);

printf("\n\n");


//DADOS DA CARTA 2 // PARTE DO CODIGO QUE IMPRIME NA TELA O QUE O USUARIO DIGITOU NA CARTA 2 


printf (" CARTA 2 \n");

printf("NOME DO ESTADO: %s \n", estado2);

printf("CODIGO DA CARTA: %s \n", codigocarta2);

printf("NOME DA CIDADE: %s \n", cidade2);

printf("POPULAÇAO: %d \n", populacao2);

printf("AREA EM KM²: %.0f \n", areakm2);

printf("PIB: %.0f\n",pib2);

printf("PONTOS TURISTICOS: %d \n", pontosdeturismo2);






return 0;
} 
