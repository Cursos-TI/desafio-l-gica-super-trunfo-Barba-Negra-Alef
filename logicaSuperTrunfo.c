#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    printf("Jogo Super Trunfo - Cidades Brasileiras\n\n");
    
    // Dados da Carta 1 - São Paulo
    char estado1[] = "SP";
    char codigo1[] = "011";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 2300000.0;
    int pontosTuristicos1 = 10;

    // Dados da Carta 2 - Rio de Janeiro
    char estado2[] = "RJ";
    char codigo2[] = "021";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.0;
    float pib2 = 1500000.0;
    int pontosTuristicos2 = 8;

    // Densidade populacional = habitantes por km²
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB per capita = PIB gerada por habitante
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Informações das cartas
    printf("Informações das Cartas:\n\n");
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n\n", pibPerCapita2);

    // Comparação pelo atributo: População
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    // Teste lógico para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
