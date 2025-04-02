#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3], estado2[3], codigo1[6], codigo2[6], cidade1[31], cidade2[31];
    int populacao1, populacao2, tur1, tur2;
    float area1, area2, pib1, pib2;

    printf("Digite os dados da primeira carta.\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    getchar();
    
    printf("Código: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (milhões): ");
    scanf("%f", &pib1);
    
    printf("Número de turistas anuais: ");
    scanf("%d", &tur1);
    getchar();

    printf("\nDigite os dados da segunda carta.\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    getchar();
    
    printf("Código: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (milhões): ");
    scanf("%f", &pib2);
    
    printf("Número de turistas anuais: ");
    scanf("%d", &tur2);

    printf("\n===== Resumo das Cartas =====\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Código: %s | População: %d | Área: %.2f km² | PIB: %.2f milhões | Turismo: %d visitantes\n\n", 
           codigo1, populacao1, area1, pib1, tur1);

    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("Código: %s | População: %d | Área: %.2f km² | PIB: %.2f milhões | Turismo: %d visitantes\n", 
           codigo2, populacao2, area2, pib2, tur2);

    return 0;
}
