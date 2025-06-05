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

    if ( Numero_de_pontos_turisticos_01 > Numero_de_pontos_turisticos_02);
    printf ("Carta 01 venceu! \n");

    else if (Numero_de_pontos_turisticos_01 < Numero_de_pontos_turisticos_02);
    printf ("Carta 02 venceu!");
    

     printf("\n===== DADOS DA CIDADE 01 =====\n");
    printf("Número da carta 01        : %d\n", carta_01);
    printf("Estado 01                  : %s\n", Estado_01);
    printf("Código da carta 01         : %s\n", Codigo_da_carta_01);
    printf("Cidade 01                  : %s\n", Nome_da_cidade_01);
    printf("População 01               : %.0lf\n", Populacao_01);
    printf("Pontos turísticos 01       : %d\n", Numero_de_pontos_turisticos_01);
    printf("PIB da cidade 01           : %.2f\n", PIB_01);
    printf("Área da cidade 01          : %.2f km²\n", Area_01);
    printf("Densidade populacional da cidade 01 :%f hab/km²\n", divisao_01);
    printf("PIB per Capita da cidade 01 : %.2f\n", divisao_03);

    printf("\n===== DADOS DA CIDADE 02 =====\n");
    printf("Número da carta 02        : %d\n", carta_02);
    printf("Estado 02                  : %s\n", Estado_02);
    printf("Código da carta 02         : %s\n", Codigo_da_carta_02);
    printf("Cidade 02                  : %s\n", Nome_da_cidade_02);
    printf("População 02               : %.0lf\n", Populacao_02);
    printf("Pontos turísticos 02       : %d\n", Numero_de_pontos_turisticos_02);
    printf("PIB da cidade 02           : %.2f\n", PIB_02);
    printf("Área da cidade 02          : %.2f km²\n", Area_02);
    printf("Densidade populacional da cidade 02: %f hab/km²\n", divisao_02);
    printf("PIB per Capita da cidade 02: %.2f\n", divisa0_04);

    return 0;
}