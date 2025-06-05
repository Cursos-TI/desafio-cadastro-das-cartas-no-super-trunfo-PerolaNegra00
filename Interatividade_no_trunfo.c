#include <stdio.h>
#include <string.h>

void flush_stdin(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char Estado_01[50], Estado_02[50];
    char Nome_da_cidade_01[50], Nome_da_cidade_02[50];
    int Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02;
    int carta_01, carta_02;
    unsigned long int Populacao_01, Populacao_02;
    float PIB_01, PIB_02;
    float Area_01, Area_02;
    char Codigo_da_carta_01[10], Codigo_da_carta_02[10];

    // Entrada dos dados da cidade 01
    printf("Digite o número da carta 01:\n");
    scanf("%d", &carta_01);
    flush_stdin();

    printf("Digite o nome do Estado 01:\n");
    fgets(Estado_01, sizeof(Estado_01), stdin);
    Estado_01[strcspn(Estado_01, "\n")] = 0;

    printf("Digite o código da carta 01:\n");
    fgets(Codigo_da_carta_01, sizeof(Codigo_da_carta_01), stdin);
    Codigo_da_carta_01[strcspn(Codigo_da_carta_01, "\n")] = 0;

    printf("Digite o nome da cidade 01:\n");
    fgets(Nome_da_cidade_01, sizeof(Nome_da_cidade_01), stdin);
    Nome_da_cidade_01[strcspn(Nome_da_cidade_01, "\n")] = 0;

    printf("Digite a população da cidade 01:\n");
    scanf("%lu", &Populacao_01);
    flush_stdin();

    printf("Digite o número de pontos turísticos da cidade 01:\n");
    scanf("%d", &Numero_de_pontos_turisticos_01);
    flush_stdin();

    printf("Digite o PIB da cidade 01:\n");
    scanf("%f", &PIB_01);
    flush_stdin();

    printf("Digite a área da cidade 01 (em km²):\n");
    scanf("%f", &Area_01);
    flush_stdin();

    // Entrada dos dados da cidade 02
    printf("Digite o número da carta 02:\n");
    scanf("%d", &carta_02);
    flush_stdin();

    printf("Digite o nome do Estado 02:\n");
    fgets(Estado_02, sizeof(Estado_02), stdin);
    Estado_02[strcspn(Estado_02, "\n")] = 0;

    printf("Digite o código da carta 02:\n");
    fgets(Codigo_da_carta_02, sizeof(Codigo_da_carta_02), stdin);
    Codigo_da_carta_02[strcspn(Codigo_da_carta_02, "\n")] = 0;

    printf("Digite o nome da cidade 02:\n");
    fgets(Nome_da_cidade_02, sizeof(Nome_da_cidade_02), stdin);
    Nome_da_cidade_02[strcspn(Nome_da_cidade_02, "\n")] = 0;

    printf("Digite a população da cidade 02:\n");
    scanf("%lu", &Populacao_02);
    flush_stdin();

    printf("Digite o número de pontos turísticos da cidade 02:\n");
    scanf("%d", &Numero_de_pontos_turisticos_02);
    flush_stdin();

    printf("Digite o PIB da cidade 02:\n");
    scanf("%f", &PIB_02);
    flush_stdin();

    printf("Digite a área da cidade 02 (em km²):\n");
    scanf("%f", &Area_02);
    flush_stdin();

    // Cálculo da densidade demográfica
    float densidade_01 = (float)Populacao_01 / Area_01;
    float densidade_02 = (float)Populacao_02 / Area_02;

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando:\n");

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %lu\n", Nome_da_cidade_01, Populacao_01);
            printf("%s: %lu\n", Nome_da_cidade_02, Populacao_02);
            if (Populacao_01 > Populacao_02)
                printf("=> %s venceu!\n", Nome_da_cidade_01);
            else if (Populacao_02 > Populacao_01)
                printf("=> %s venceu!\n", Nome_da_cidade_02);
            else
                printf("=> Empate!\n");
            break;
        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", Nome_da_cidade_01, Area_01);
            printf("%s: %.2f km²\n", Nome_da_cidade_02, Area_02);
            if (Area_01 > Area_02)
                printf("=> %s venceu!\n", Nome_da_cidade_01);
            else if (Area_02 > Area_01)
                printf("=> %s venceu!\n", Nome_da_cidade_02);
            else
                printf("=> Empate!\n");
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: %.2f\n", Nome_da_cidade_01, PIB_01);
            printf("%s: %.2f\n", Nome_da_cidade_02, PIB_02);
            if (PIB_01 > PIB_02)
                printf("=> %s venceu!\n", Nome_da_cidade_01);
            else if (PIB_02 > PIB_01)
                printf("=> %s venceu!\n", Nome_da_cidade_02);
            else
                printf("=> Empate!\n");
            break;
        case 4:
            printf("Número de pontos turísticos:\n");
            printf("%s: %d\n", Nome_da_cidade_01, Numero_de_pontos_turisticos_01);
            printf("%s: %d\n", Nome_da_cidade_02, Numero_de_pontos_turisticos_02);
            if (Numero_de_pontos_turisticos_01 > Numero_de_pontos_turisticos_02)
                printf("=> %s venceu!\n", Nome_da_cidade_01);
            else if (Numero_de_pontos_turisticos_02 > Numero_de_pontos_turisticos_01)
                printf("=> %s venceu!\n", Nome_da_cidade_02);
            else
                printf("=> Empate!\n");
            break;
        case 5:
            printf("Densidade demográfica (vence a MENOR):\n");
            printf("%s: %.2f hab/km²\n", Nome_da_cidade_01, densidade_01);
            printf("%s: %.2f hab/km²\n", Nome_da_cidade_02, densidade_02);
            if (densidade_01 < densidade_02)
                printf("=> %s venceu!\n", Nome_da_cidade_01);
            else if (densidade_02 < densidade_01)
                printf("=> %s venceu!\n", Nome_da_cidade_02);
            else
                printf("=> Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}