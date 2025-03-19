#include <stdio.h>

int main() {
char Cidade1[10] = "Bahia";
int Populacao1 = 14140000;
float Area1 = 564.760;
double PIB1 = 34900000000.0;
int PontosTuristicos1 = 13;
float Densidadepopulacional1 = Populacao1 / Area1;

char Cidade2[10] = "Paraná";
int Populacao2 = 11440000;
float Area2 = 199.315;
double PIB2 = 66565000000.0;
int PontosTuristicos2 = 18;
float Densidadepopulacional2 = Populacao2 / Area2;

int opcao, atributo;

printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Tutorial\n");
printf("3. Regras\n");
printf("4. Fechar jogo\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao) {
case 1:
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributo);

    printf("=== Resultado da Comparação ===\n");
    printf("Carta 1: %s\n", Cidade1);
    printf("Carta 2: %s\n", Cidade2);

    switch (atributo) {
    case 1:
        printf("Atributo: População\n");
        printf("Bahia: %d\n", Populacao1);
        printf("Paraná: %d\n", Populacao2);
        if (Populacao1 > Populacao2) 
        printf("Bahia venceu!\n");
        else if (Populacao1 < Populacao2) 
        printf("Paraná venceu!\n");
        else 
        printf("Empate!\n");
        break;
    case 2:
        printf("Atributo: Área\n");
        printf("Bahia: %.2f km²\n", Area1);
        printf("Paraná: %.2f km²\n", Area2);
        if (Area1 > Area2) 
        printf("Bahia venceu!\n");
        else if (Area1 < Area2) 
        printf("Paraná venceu!\n");
        else 
        printf("Empate!\n");
        break;
    case 3:
        printf("Atributo: PIB\n");
        printf("Bahia: %.2f bilhões de reais\n", PIB1 / 1000000000);
        printf("Paraná: %.2f bilhões de reais\n", PIB2 / 1000000000);
        if (PIB1 > PIB2) 
        printf("Bahia venceu!\n");
        else if (PIB1 < PIB2) 
        printf("Paraná venceu!\n");
        else 
        printf("Empate!\n");
        break;
    case 4:
        printf("Atributo: Número de pontos turísticos\n");
        printf("Bahia: %d\n", PontosTuristicos1);
        printf("Paraná: %d\n", PontosTuristicos2);
        if (PontosTuristicos1 > PontosTuristicos2) 
        printf("Bahia venceu!\n");
        else if (PontosTuristicos1 < PontosTuristicos2) 
        printf("Paraná venceu!\n");
        else 
        printf("Empate!\n");
        break;
    case 5:
        printf("Atributo: Densidade demográfica\n");
        printf("Bahia: %.2f hab/km²\n", Densidadepopulacional1);
        printf("Paraná: %.2f hab/km²\n", Densidadepopulacional2);
        if (Densidadepopulacional1 < Densidadepopulacional2) 
        printf("Bahia venceu!\n");
        else if (Densidadepopulacional1 > Densidadepopulacional2) 
        printf("Paraná venceu!\n");
        else 
        printf("Empate!\n");
        break;
    default:
        printf("Atributo inválido!\n");
        break;
    }
    break;

case 2:
    printf("Tutorial:\n");
    printf("Exemplo de comparação de atributo:\n");
    printf("Comparação de População:\n");
    printf("Carta 1 - Bahia (BA): %d\n", Populacao1);
    printf("Carta 2 - Paraná (PR): %d\n", Populacao2);
    if (Populacao1 > Populacao2) 
    printf("Bahia venceu!\n");
    else if (Populacao1 < Populacao2) 
    printf("Paraná venceu!\n");
    else 
    printf("Empate!\n");
    break;

case 3:
    printf("Regras:\n");
    printf("- O jogador escolhe um atributo para comparar.\n");
    printf("- A carta com o maior valor vence.\n");
    printf("- Para densidade demográfica, vence a carta com o menor valor.\n");
    break;

case 4:
    printf("Fechando jogo...\n");
    break;

default:
    printf("Opção inválida!\n");
    break;
}

return 0;
}