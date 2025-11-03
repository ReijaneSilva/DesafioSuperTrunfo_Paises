#include <stdio.h>
// Desafio Super Trunfo - Países
// Tarefa 1 - Cadastro de cartas
// Este e o nível Novato - O jogador deverá criar as cartas entrando com as principais características do Estado e cidade escolhidos
define NUM_ESTADOS 8
define NUM_CIDADES 4

int main() {
    char estado[30]
    char codigo[3]
    char cidade[40]
    int populacao;
    float areacidade;
    float pib;
    int pontosTuristicos;
    
    printf("Cadastro de Cartas - Super Trunfo Países\n");
   
    printf("Entre com o Estado: \n");
    scanf("%s", &estado);
    printf("Entre com o Código de Área (3 dígitos): \n");
    scanf("%d", &codigo);
    printf("Entre com o nome da Cidade: \n");
    scanf("%s", &cidade);
    printf("Entre com a quantidade da População: \n");
    scanf("%d", &populacao);
    printf("Entre com a Área da Cidade (km2): \n");
    scanf("%f", &areacidade);
    printf("Entre com o PIB (bilhoes de reais): \n");
    scanf("%f", &pib);
    printf("Entre com o número de Pontos Turísticos da Cidade: \n");
    scanf("%d", &pontosTuristicos);
   
   

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
