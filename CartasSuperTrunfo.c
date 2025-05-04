#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char Estado_01[50], Estado_02[50];
    char Nome_da_cidade_01[50], Nome_da_cidade_02[50];
    int  Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02;
    int carta_01, carta_02;
    double Populacao_01, Populacao_02;
    float PIB_01, PIB_02;
    float Area_01, Area_02;
    char Codigo_da_carta_01, Codigo_da_carta_02;
    
    // Cadastro das Cartas
    
    printf("Digite o número da carta 01: \n");
    scanf("%d", &carta_01);
    fflush(stdin);

    printf("Digite o nome do Estado 01: \n");
    scanf("%49s", Estado_01);
    fflush(stdin);

    printf("Digite o código da carta 01: \n");
    scanf(" %c", &Codigo_da_carta_01);
    fflush(stdin); 

    printf("Digite o nome da cidade 01: \n");
    scanf("%s", Nome_da_cidade_01);
    fflush(stdin);

    printf("Digite a população da cidade 01: \n");
    scanf("%lf", &Populacao_01);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade 01: \n");
    scanf("%d", &Numero_de_pontos_turisticos_01);
    fflush(stdin);

    printf("Digite o PIB da cidade 01: \n");
    scanf("%f", &PIB_01);
    fflush(stdin);

    printf("Digite a área da cidade 01 (em km²): \n");
    scanf("%f", &Area_01);
    fflush(stdin);

    
    printf("Digite o número da carta 02: \n");
    scanf("%d", &carta_02);
    fflush(stdin);

    printf("Digite o nome do Estado 02: \n");
    scanf("%49s", Estado_02);
    fflush(stdin);

    printf("Digite o código da carta 02: \n");
    scanf(" %c", &Codigo_da_carta_02);
    fflush(stdin);

    printf("Digite o nome da cidade 02: \n");
    scanf("%s", &Nome_da_cidade_02);
    fflush(stdin);

    printf("Digite a população da cidade 02: \n");
    scanf("%lf", &Populacao_02);
    fflush(stdin);

    printf("Digite o número de pontos turísticos da cidade 02: \n");
    scanf("%d", &Numero_de_pontos_turisticos_02);
    fflush(stdin);

    printf("Digite o PIB da cidade 02: \n");
    scanf("%f", &PIB_02);
    fflush(stdin);

    printf("Digite a área da cidade 02 (em km²): \n");
    scanf("%f", &Area_02);
    fflush(stdin);

    printf("\n===== DADOS DA CIDADE 01 =====\n");
    printf("Número da carta 01        : %d\n", carta_01);
    printf("Estado 01                  : %s\n", Estado_01);
    printf("Código da carta 01         : %c\n", Codigo_da_carta_01);
    printf("Cidade 01                  : %s\n", Nome_da_cidade_01);
    printf("População 01               : %lf\n", Populacao_01);
    printf("Pontos turísticos 01       : %d\n", Numero_de_pontos_turisticos_01);
    printf("PIB da cidade 01           : %f\n", PIB_01);
    printf("Área da cidade 01          : %f km²\n", Area_01);

    printf("\n===== DADOS DA CIDADE 02 =====\n");
    printf("Número da carta 02        : %d\n", carta_02);
    printf("Estado 02                  : %s\n", Estado_02);
    printf("Código da carta 02         : %c\n", Codigo_da_carta_02);
    printf("Cidade 02                  : %s\n", Nome_da_cidade_02);
    printf("População 02               : %lf\n", Populacao_02);
    printf("Pontos turísticos 02       : %d\n", Numero_de_pontos_turisticos_02);
    printf("PIB da cidade 02           : %f\n", PIB_02);
    printf("Área da cidade 02          : %f km²\n", Area_02);
    

    return 0;
}
