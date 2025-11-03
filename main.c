#include <stdio.h>
// Desafio Super Trunfo - Países
// Tarefa 1 - Cadastro de cartas
// Este e o nível Novato - O jogador deverá criar as cartas entrando com as principais características do Estado e cidade escolhidos


int main() {
    char estado[30];
    int codigo[3];
    char cidade[40];
    int populacao;
    float areacidade;
    float pib;
    int pontosTuristicos;
    
    printf("Cadastro de Cartas - Super Trunfo Países\n");
   
    printf("Entre com o Estado: \n");
    scanf("%s", &estado);
    printf("Entre com o Código DDD de Área (3 dígitos): \n");
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
   
     // Exibir os dados cadastrados

    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area em Km²: %.2f\n", areacidade);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
   
}
