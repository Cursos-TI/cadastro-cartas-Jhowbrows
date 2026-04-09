#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //variaveis carta 1
    char card1_state;
    char card1_state_code[4], card1_state_name[50];
    int card1_population, card1_touristSpot;
    float card1_area, card1_pib;

    //variaveis carta 2
    char card2_state;
    char card2_state_code[4], card2_state_name[50];
    int card2_population, card2_touristSpot;
    float card2_area, card2_pib;

  // Área para entrada de dados
      //entrada e leitura da carta 1
    printf("Dígite as informações da carta 1:\n");
    printf("Estado(A - H): ");
    scanf(" %c", &card1_state);

    printf("Código: ");
    scanf("%s", card1_state_code);

    printf("Nome da cidade: ");
    getchar();
    fgets(card1_state_name,50, stdin);
    card1_state_name[strcspn(card1_state_name, "\n")] = 0;

    printf("População: ");
    scanf("%d", &card1_population);

    printf("Área: ");
    scanf("%f", &card1_area);
    
    printf("PIB: ");
    scanf("%f", &card1_pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &card1_touristSpot);


    //entrada e leitura da carta 2
    printf("\nDigíte as informações da carta 2: \n");
    printf("Estado(A - H): ");
    scanf(" %c", &card2_state);

    printf("Código: ");
    scanf("%s", card2_state_code);

    printf("Nome da cidade: ");
    getchar();
    fgets(card2_state_name, 50, stdin);
    card2_state_name[strcspn(card2_state_name, "\n")] = 0;

    printf("População: ");
    scanf("%d", &card2_population);

    printf("Área: ");
    scanf("%f", &card2_area);
    
    printf("PIB: ");
    scanf("%f", &card2_pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &card2_touristSpot);
  // Área para exibição dos dados da cidade
      //exibição de carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", card1_state);
    printf("Código: %s\n", card1_state_code);
    printf("Nome da cídade: %s\n", card1_state_name);
    printf("População: %d\n", card1_population);
    printf("Área: %f km²\n", card1_area);
    printf("PIB: %f bilhões de reais\n", card1_pib);
    printf("Número de pontos Turísticos: %d\n", card1_touristSpot);

    //Exibição de carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", card2_state);
    printf("Código: %s\n", card2_state_code);
    printf("Nome da cídade: %s\n", card2_state_name);
    printf("População: %d\n", card2_population);
    printf("Área: %f km²\n", card2_area);
    printf("PIB: %f bilhões de reais\n", card2_pib);
    printf("Número de pontos Turísticos: %d\n", card2_touristSpot);

return 0;
} 
