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

    for (int cidade = 0; cidade < 2; cidade++) {
        printf("\n--- Cadastro da Cidade %d ---\n", cidade + 1);

        printf("Digite uma letra de 'A' a 'H': ");
        scanf(" %c", &letra_inicial[cidade]);

        printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
        scanf("%9s", codigo_da_carta[cidade]);
        getchar(); // consome o '\n'

        printf("Digite o nome da cidade: ");
        fgets(nome_da_cidade[cidade], sizeof(nome_da_cidade[cidade]), stdin);
        // Remove o '\n' se estiver presente
        nome_da_cidade[cidade][strcspn(nome_da_cidade[cidade], "\n")] = '\0';

        printf("Digite a população da cidade: ");
        scanf("%d", &populacao[cidade]);

        printf("Digite a área em quilômetros quadrados da cidade: ");
        scanf("%f", &kms_quadrados[cidade]);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib[cidade]);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos[cidade]);
    }

    // Impressão dos dados
    printf("\n\n===== Informações das Cidades =====\n");
    for (int cidade = 0; cidade < 2; cidade++) {
        printf("\n--- Cidade %d ---\n", cidade + 1);
        printf("Letra da carta: %c\n", letra_inicial[cidade]);
        printf("Código da carta: %s\n", codigo_da_carta[cidade]);
        printf("Nome da cidade: %s\n", nome_da_cidade[cidade]);
        printf("População da cidade: %d\n", populacao[cidade]);
        printf("Área da cidade: %.2f km²\n", kms_quadrados[cidade]);
        printf("PIB da cidade: %.2f bilhões de reais\n", pib[cidade]);
        printf("Pontos turísticos: %d\n", pontos_turisticos[cidade]);
    }

    return 0;
}
