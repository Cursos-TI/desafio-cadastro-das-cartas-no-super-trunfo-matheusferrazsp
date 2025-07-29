#include <stdio.h>
#include <string.h>

int main() {
    char letra_inicial[2];  
    char codigo_da_carta[2][10];
    char nome_da_cidade[2][50];
    int populacao[2];
    float kms_quadrados[2];
    float pib[2];
    int pontos_turisticos[2];

    // Cidade 1
    printf("\n--- Cadastro da Cidade 1 ---\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &letra_inicial[0]);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%9s", codigo_da_carta[0]);
    getchar(); // consome o '\n'

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade[0], sizeof(nome_da_cidade[0]), stdin);
    nome_da_cidade[0][strcspn(nome_da_cidade[0], "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[0]);

    printf("Digite a área em quilômetros quadrados da cidade: ");
    scanf("%f", &kms_quadrados[0]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib[0]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos[0]);

    getchar(); // limpa buffer

    // Cidade 2
    printf("\n--- Cadastro da Cidade 2 ---\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &letra_inicial[1]);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%9s", codigo_da_carta[1]);
    getchar(); // consome o '\n'

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade[1], sizeof(nome_da_cidade[1]), stdin);
    nome_da_cidade[1][strcspn(nome_da_cidade[1], "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[1]);

    printf("Digite a área em quilômetros quadrados da cidade: ");
    scanf("%f", &kms_quadrados[1]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib[1]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos[1]);

    // Impressão
    printf("\n\n===== Informações das Cidades =====\n");

    printf("\n--- Cidade 1 ---\n");
    printf("Letra da carta: %c\n", letra_inicial[0]);
    printf("Código da carta: %s\n", codigo_da_carta[0]);
    printf("Nome da cidade: %s\n", nome_da_cidade[0]);
    printf("População da cidade: %d\n", populacao[0]);
    printf("Área da cidade: %.2f km²\n", kms_quadrados[0]);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib[0]);
    printf("Pontos turísticos: %d\n", pontos_turisticos[0]);

    printf("\n--- Cidade 2 ---\n");
    printf("Letra da carta: %c\n", letra_inicial[1]);
    printf("Código da carta: %s\n", codigo_da_carta[1]);
    printf("Nome da cidade: %s\n", nome_da_cidade[1]);
    printf("População da cidade: %d\n", populacao[1]);
    printf("Área da cidade: %.2f km²\n", kms_quadrados[1]);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib[1]);
    printf("Pontos turísticos: %d\n", pontos_turisticos[1]);

    return 0;
}
