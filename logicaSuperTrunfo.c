#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int populacao, ptur;
    float area, PIB;
    char codigo[10];
    int populacao2, ptur2;
    float area2, PIB2;
    char codigo2[10];
    int opcao;
    

    //Declaração da Variável do Menu
    printf("Escolha uma opção:\n");
    printf("1. Comparar população\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    scanf("%d", &opcao);
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Solicita o código da cidade
    printf("Digite o Código da primeira cidade: \n");
    // Lê o código da cidade
    scanf(" %s", &codigo);
    // Solicita o PIB da cidade
    printf("Digite o PIB da primeira cidade em bilhões: \n");
    // Lê o PIB da cidade
    scanf(" %f", &PIB);
    // Solicita a população da cidade
    printf("Digite a população da primeira cidade: \n");
    // Lê a população da cidade
    scanf(" %d", &populacao);
    // Solicita os pontos turísticos da cidade
    printf("Digite quantos pontos turísticos a primeira cidade tem: \n");
    // Lê os pontos turísticos da cidade
    scanf(" %d", &ptur);
    // Solicita a área da cidade
    printf("Digite a área da primeira cidade em km²: \n");
    // Lê a área da cidade
    scanf(" %f", &area);

    // Solicita o código da cidade
    printf("Digite o Código da segunda cidade: \n");
    // Lê o código da cidade
    scanf(" %s", &codigo2);
    // Solicita o PIB da cidade
    printf("Digite o PIB da segunda cidade em bilhões: \n");
    // Lê o PIB da cidade
    scanf(" %f", &PIB2);
    // Solicita a população da cidade
    printf("Digite a população da segunda cidade: \n");
    // Lê a população da cidade
    scanf(" %d", &populacao2);
    // Solicita os pontos turísticos da cidade
    printf("Digite quantos pontos turísticos a segunda cidade tem: \n");
    // Lê os pontos turísticos da cidade
    scanf(" %d", &ptur2);
    // Solicita a área da cidade
    printf("Digite a área da segunda cidade em km²: \n");
    // Lê a área da cidade
    scanf(" %f", &area2);

    printf("\nCalculando Vencedor...\n\n");
    switch (opcao) {
    case 1:
      if (populacao > populacao2) {
        printf("%s é a cidade vencedora\n", codigo);
    } else {
        printf("%s é a cidade vencedora\n", codigo2);
    }
      break;
    case 2:
      if (area > area2) {
        printf("%s é a cidade vencedora\n", codigo);
    } else {
        printf("%s é a cidade vencedora\n", codigo2);
    }
      break;
    case 3:
      if (PIB > PIB2) {
        printf("%s é a cidade vencedora\n", codigo);
    } else {
        printf("%s é a cidade vencedora\n", codigo2);
    }
      break;
    case 4:
      if (ptur > ptur2) {
        printf("%s tem mais pontos turísticos\n", codigo);
    } else {
        printf("%s tem mais pontos turísticos\n", codigo2);
    }
      break;
    default:
      printf("Opção inválida\n");
    }
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\nFicou curioso para saber em qual atributo a cidade poderia ganhar? Veja a comparação de todos os atributos abaixo:\n");
    if (populacao > populacao2) {
        printf("  %s tem a maior população\n", codigo);
    } else {
        printf("  %s tem a maior população\n", codigo2);
    }
    if (PIB > PIB2) {
        printf("  %s tem o maior PIB\n", codigo);
    } else {
        printf("  %s tem o maior PIB\n", codigo2);
    }
    if (area > area2) {
        printf("  %s tem a maior área\n", codigo);
    } else {
        printf("  %s tem a maior área\n", codigo2);
    }
    if (ptur > ptur2) {
        printf("  %s tem mais pontos turísticos\n", codigo);
    } else {
        printf("  %s tem mais pontos turísticos\n", codigo2);
    }

    return 0;
}