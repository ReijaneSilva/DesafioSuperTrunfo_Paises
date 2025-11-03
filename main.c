include <stdio.h>

define NUM_ESTADOS 8
define NUM_CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4]; // Ex: A01, B02
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade;

int main() {
    Cidade cartas[NUM_ESTADOS * NUM_CIDADES];
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i, j, index = 0;

    printf("Cadastro de Cartas - Super Trunfo Países\n");

    for (i = 0; i < NUM_ESTADOS; i++) {
        for (j = 1; j <= NUM_CIDADES; j++) {
            // Gerar código da carta
            sprintf(cartas[index].codigo, "%c%02d", estados[i], j);

            printf("\nCarta %s\n", cartas[index].codigo);
            printf("População: ");
            scanf("%d", &cartas[index].populacao);
            printf("Área (km²): ");
            scanf("%f", &cartas[index].area);
            printf("PIB (em bilhões): ");
            scanf("%f", &cartas[index].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[index].pontosTuristicos);

            index++;
        }
    }

    // Exibir os dados cadastrados
    printf("\nCartas cadastradas:\n");
    for (i = 0; i < NUM_ESTADOS * NUM_CIDADES; i++) {
        printf("\nCódigo: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
