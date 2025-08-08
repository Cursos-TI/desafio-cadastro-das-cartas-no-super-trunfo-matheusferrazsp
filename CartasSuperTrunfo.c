#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

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
    limpar_buffer(); 

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%9s", codigo_da_carta[0]);
    limpar_buffer(); 

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

    limpar_buffer(); 

    // Cidade 2
    printf("\n--- Cadastro da Cidade 2 ---\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &letra_inicial[1]);
    limpar_buffer();

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%9s", codigo_da_carta[1]);
    limpar_buffer();

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
    limpar_buffer();

    float densidade_1 = (float)populacao[0] / kms_quadrados[0]; 
    float calculo_pib_1 = (pib[0] * 1000000000.0) / (float)populacao[0];

    float densidade_2 = (float)populacao[1] / kms_quadrados[1]; 
    float calculo_pib_2 = (pib[1] * 1000000000.0) / (float)populacao[1];

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", calculo_pib_1);

    printf("\n--- Cidade 2 ---\n");
    printf("Letra da carta: %c\n", letra_inicial[1]);
    printf("Código da carta: %s\n", codigo_da_carta[1]);
    printf("Nome da cidade: %s\n", nome_da_cidade[1]);
    printf("População da cidade: %d\n", populacao[1]);
    printf("Área da cidade: %.2f km²\n", kms_quadrados[1]);
    printf("PIB da cidade: %.2f bilhões de reais\n", pib[1]);
    printf("Pontos turísticos: %d\n", pontos_turisticos[1]);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", calculo_pib_2);

    return 0;
}