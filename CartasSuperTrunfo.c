#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
//Desafio feito com base nos seguintes dados pré-definidos de cada Card e resultado da comparação é baseado nesses dados.

int main() {
  //Área para definição das variáveis para armazenar as propriedades das cidades
    //variaveis carta 1
    char card1_state;
    char card1_state_code[4], card1_state_name[50];
    unsigned long int card1_population;
    int card1_touristSpot;
    float card1_area, card1_pib, card1_population_density,card1_pib_capta, card1_superp;

    //variaveis carta 2
    char card2_state;
    char card2_state_code[4], card2_state_name[50];
    unsigned long int card2_population;
    int card2_touristSpot;
    float card2_area, card2_pib,card2_population_density,card2_pib_capta, card2_superp;

  //Área para entrada de dados
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
    scanf("%lu", &card1_population);

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
    scanf("%lu", &card2_population);

    printf("Área: ");
    scanf("%f", &card2_area);
    
    printf("PIB: ");
    scanf("%f", &card2_pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &card2_touristSpot);

  //cálculo da densidade, pib per capta e superpoder dos cards 1 e 2 
  card1_population_density = (float) card1_population / card1_area;
  card1_pib_capta = (float) (card1_pib * 1000000000.0) / card1_population;

  card2_population_density = (float) card2_population / card2_area;
  card2_pib_capta = (float) (card2_pib * 1000000000.0) / card2_population;

  card1_superp = (float) card1_population + card1_population + card1_pib + card1_touristSpot + card1_pib_capta + (1 / card1_population_density);

  card2_superp = (float) card2_population + card2_population + card2_pib + card2_touristSpot + card2_pib_capta + (1 / card2_population_density);


  // Área para exibição dos dados da cidade
    //exibição de carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", card1_state);
    printf("Código: %s\n", card1_state_code);
    printf("Nome da cídade: %s\n", card1_state_name);
    printf("População: %lu\n", card1_population);
    printf("Área: %.2f km²\n", card1_area);
    printf("PIB: %.2f bilhões de reais\n", card1_pib);
    printf("Número de pontos Turísticos: %d\n", card1_touristSpot);
    printf("Densidade Populacional: %.2f hab/km²\n", card1_population_density);
    printf("PIB per Capita: %.2f reais\n", card1_pib_capta);

    //Exibição de carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", card2_state);
    printf("Código: %s\n", card2_state_code);
    printf("Nome da cídade: %s\n", card2_state_name);
    printf("População: %lu\n", card2_population);
    printf("Área: %f km²\n", card2_area);
    printf("PIB: %f bilhões de reais\n", card2_pib);
    printf("Número de pontos Turísticos: %d\n", card2_touristSpot);
    printf("Densidade Populacional: %.2f hab/km²\n", card2_population_density);
    printf("PIB per Capita: %.2f reais\n", card2_pib_capta);

    //Comparações entre card 1 e 2
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", card1_population > card2_population);
    printf("Area: Carta 1 venceu (%d)\n", card1_area > card2_area);
    printf("PIB: Carta 1 venceu (%d)\n", card1_pib > card2_pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", card1_touristSpot > card2_touristSpot);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", card1_population_density < card2_population_density);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", card1_pib_capta > card2_pib_capta);
    printf("Super Poder: Carta 1 venceu (%d)\n", card1_superp > card2_superp);

return 0;
} 
