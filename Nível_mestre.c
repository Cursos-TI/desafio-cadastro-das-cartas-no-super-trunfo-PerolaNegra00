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

    // Cálculo de densidade e PIB per capita
    float Densidade_01 = Populacao_01 / Area_01;
    float Densidade_02 = Populacao_02 / Area_02;

    float PIBpercapita_01 = PIB_01 / Populacao_01;
    float PIBpercapita_02 = PIB_02 / Populacao_02;

    // Cálculo do Super Poder
    float SuperPoder_01 = (float)Populacao_01 + Area_01 + PIB_01 + Numero_de_pontos_turisticos_01 + PIBpercapita_01 + (1 / Densidade_01);
    float SuperPoder_02 = (float)Populacao_02 + Area_02 + PIB_02 + Numero_de_pontos_turisticos_02 + PIBpercapita_02 + (1 / Densidade_02);

    // Comparações
    printf("\n\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao_01 > Populacao_02);
    printf("Área: Carta 1 venceu (%d)\n", Area_01 > Area_02);
    printf("PIB: Carta 1 venceu (%d)\n", PIB_01 > PIB_02);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Numero_de_pontos_turisticos_01 > Numero_de_pontos_turisticos_02);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade_01 < Densidade_02); // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpercapita_01 > PIBpercapita_02);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder_01 > SuperPoder_02);

    return 0;
}
