#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char Cidade1[] = "Bahia";
    int Populacao1 = 14140000;
    float Area1 = 564.760;
    double PIB1 = 34900000000.0;
    int PontosTuristicos1 = 13;
    float Densidadepopulacional1 = Populacao1 / Area1;

    char Cidade2[] = "Paraná";
    int Populacao2 = 11440000;
    float Area2 = 199.315;
    double PIB2 = 66565000000.0;
    int PontosTuristicos2 = 18;
    float Densidadepopulacional2 = Populacao2 / Area2;

    int menu, primeiroatributo, segundoatributo;
    double somaJogador = 0, somaComputador = 0;

    // Para armazenar os nomes dos atributos
    const char *atributo1;
    const char *atributo2;

    double valorJogador1, valorJogador2, valorComputador1, valorComputador2;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Tutorial\n");
    printf("3. Regras\n");
    printf("4. Fechar jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &menu);

    srand(time(0));

    switch (menu) {
        case 1:
            // Iniciar Jogo
            printf("Escolha o primeiro atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica (menor é melhor)\n");
            scanf("%d", &primeiroatributo);

            printf("Escolha o segundo atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica (menor é melhor)\n");
            scanf("%d", &segundoatributo);

            if (primeiroatributo == segundoatributo) {
                printf("Você escolheu o mesmo atributo duas vezes!\n");
                break;
            }

            switch (primeiroatributo) {
                case 1:
                    valorJogador1 = Populacao1;
                    valorComputador1 = Populacao2;
                    atributo1 = "População";
                    break;
                case 2:
                    valorJogador1 = Area1;
                    valorComputador1 = Area2;
                    atributo1 = "Área";
                    break;
                case 3:
                    valorJogador1 = PIB1;
                    valorComputador1 = PIB2;
                    atributo1 = "PIB";
                    break;
                case 4:
                    valorJogador1 = PontosTuristicos1;
                    valorComputador1 = PontosTuristicos2;
                    atributo1 = "Pontos Turísticos";
                    break;
                case 5:
                    valorJogador1 = Densidadepopulacional1;
                    valorComputador1 = Densidadepopulacional2;
                    atributo1 = "Densidade Demográfica";
                    valorJogador1 = -valorJogador1;
                    valorComputador1 = -valorComputador1;
                    break;
                default:
                    printf("Atributo inválido!\n");
                    return 1;
            }

            switch (segundoatributo) {
                case 1:
                    valorJogador2 = Populacao1;
                    valorComputador2 = Populacao2;
                    atributo2 = "População";
                    break;
                case 2:
                    valorJogador2 = Area1;
                    valorComputador2 = Area2;
                    atributo2 = "Área";
                    break;
                case 3:
                    valorJogador2 = PIB1;
                    valorComputador2 = PIB2;
                    atributo2 = "PIB";
                    break;
                case 4:
                    valorJogador2 = PontosTuristicos1;
                    valorComputador2 = PontosTuristicos2;
                    atributo2 = "Pontos Turísticos";
                    break;
                case 5:
                    valorJogador2 = Densidadepopulacional1;
                    valorComputador2 = Densidadepopulacional2;
                    atributo2 = "Densidade Demográfica";
                    valorJogador2 = -valorJogador2;
                    valorComputador2 = -valorComputador2;
                    break;
                default:
                    printf("Atributo inválido!\n");
                    return 1;
            }

            // Soma dos atributos
            somaJogador = valorJogador1 + valorJogador2;
            somaComputador = valorComputador1 + valorComputador2;

            // Exibição dos resultados
            printf("Resultado da Comparação:\n");
            printf("Carta do Jogador: %s\n", Cidade1);
            printf("%s: %.2f\n", atributo1, valorJogador1);
            printf("%s: %.2f\n", atributo2, valorJogador2);
            printf("Soma dos atributos: %.2f\n", somaJogador);

            printf("Carta do Computador: %s\n", Cidade2);
            printf("%s: %.2f\n", atributo1, valorComputador1);
            printf("%s: %.2f\n", atributo2, valorComputador2);
            printf("Soma dos atributos: %.2f\n", somaComputador);

            if (somaJogador > somaComputador) {
                printf("Parabéns, você venceu!\n");
            } else if (somaJogador < somaComputador) {
                printf("Infelizmente, você perdeu!\n");
            } else {
                printf("Empate!\n");
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
            printf("- O jogador escolhe dois atributos.\n");
            printf("- A vitória é definida pela soma dos valores dos atributos escolhidos.\n");
            printf("- Para o atributo: Densidade Demográfica, o menor valor vence.\n");
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