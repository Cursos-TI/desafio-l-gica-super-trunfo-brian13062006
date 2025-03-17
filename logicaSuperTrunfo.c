#include <stdio.h>

int main (){
    char Estado1 = 'A';
    char Codigo1[5] = "A01";
    char Cidade1[10] = "Bahia";
    int Populacao1 = 14140000;
    float Area1 = 564.760; // km²
    double PIB1 = 34900000000.0; // bilhões de reais
    int PontosTuristicos1 = 13;
    float Densidadepopulacional1 = Populacao1 / Area1; // hab/km²
    double PIBpercapita1 = PIB1 / Populacao1; // reais
    float SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + (1 / 25037.18) + 2468.18;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1 / 100000000.0);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBpercapita1);
    printf("Super Poder: %.2lf\n\n", SuperPoder1);


    char Estado2 = 'B';
    char Codigo2[5] = "B02";
    char Cidade2[10] = "Paraná";
    int Populacao2 = 11440000;
    float Area2 = 199.315; // km²
    double PIB2 = 66565000000.0; // bilhões de reais
    int PontosTuristicos2 = 18;
    float Densidadepopulacional2 = Populacao2 / Area2; // hab/km²
    double PIBpercapita2 = PIB2 / Populacao2; // reais
    float SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + (1 / 57396.58) + 5818.62;


    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2 / 100000000.0);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2lf\n\n", SuperPoder2);

     // Comparação de Cartas (Atributo: População:)
     printf("Comparação de Cartas (Atributo: População)\n");
     printf("Carta 1 - Bahia (BA): 14.140.000\n");
     printf("Carta 2 - Paraná (PR): 11.440.000\n");

   if(Populacao1 > Populacao2) {
      printf("Carta 1 (Bahia) venceu!");
   } else {
      printf("Carta 2 (Paraná) venceu!");
   }

   
  return 0;

}
