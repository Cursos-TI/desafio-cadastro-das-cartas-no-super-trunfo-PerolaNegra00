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
    scanf("%d", &carta_01); flush_stdin();
    printf("Digite o nome do Estado 01:\n"); fgets(Estado_01, sizeof(Estado_01), stdin);
    Estado_01[strcspn(Estado_01, "\n")] = 0;
    printf("Digite o código da carta 01:\n"); fgets(Codigo_da_carta_01, sizeof(Codigo_da_carta_01), stdin);
    Codigo_da_carta_01[strcspn(Codigo_da_carta_01, "\n")] = 0;
    printf("Digite o nome da cidade 01:\n"); fgets(Nome_da_cidade_01, sizeof(Nome_da_cidade_01), stdin);
    Nome_da_cidade_01[strcspn(Nome_da_cidade_01, "\n")] = 0;
    printf("Digite a população da cidade 01:\n"); scanf("%lu", &Populacao_01); flush_stdin();
    printf("Digite o número de pontos turísticos da cidade 01:\n"); scanf("%d", &Numero_de_pontos_turisticos_01); flush_stdin();
    printf("Digite o PIB da cidade 01:\n"); scanf("%f", &PIB_01); flush_stdin();
    printf("Digite a área da cidade 01 (em km²):\n"); scanf("%f", &Area_01); flush_stdin();

    // Entrada dos dados da cidade 02
    printf("Digite o número da carta 02:\n"); scanf("%d", &carta_02); flush_stdin();
    printf("Digite o nome do Estado 02:\n"); fgets(Estado_02, sizeof(Estado_02), stdin);
    Estado_02[strcspn(Estado_02, "\n")] = 0;
    printf("Digite o código da carta 02:\n"); fgets(Codigo_da_carta_02, sizeof(Codigo_da_carta_02), stdin);
    Codigo_da_carta_02[strcspn(Codigo_da_carta_02, "\n")] = 0;
    printf("Digite o nome da cidade 02:\n"); fgets(Nome_da_cidade_02, sizeof(Nome_da_cidade_02), stdin);
    Nome_da_cidade_02[strcspn(Nome_da_cidade_02, "\n")] = 0;
    printf("Digite a população da cidade 02:\n"); scanf("%lu", &Populacao_02); flush_stdin();
    printf("Digite o número de pontos turísticos da cidade 02:\n"); scanf("%d", &Numero_de_pontos_turisticos_02); flush_stdin();
    printf("Digite o PIB da cidade 02:\n"); scanf("%f", &PIB_02); flush_stdin();
    printf("Digite a área da cidade 02 (em km²):\n"); scanf("%f", &Area_02); flush_stdin();

    // Densidade demográfica
    float densidade_01 = (float)Populacao_01 / Area_01;
    float densidade_02 = (float)Populacao_02 / Area_02;

    int op1 = 0, op2 = 0;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1 = 0, soma_c2 = 0;

    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade demográfica\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar: ");
    scanf("%d", &op1);

    // Verifica se a opção é válida
    if (op1 < 1 || op1 > 5) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Escolha do segundo atributo (dinâmico)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &op2);
        if (op2 == op1) {
            printf("Você já escolheu esse atributo. Tente outro.\n");
        }
    } while (op2 == op1 || op2 < 1 || op2 > 5);

    // Função auxiliar para retornar valor do atributo escolhido
    float getValor(int opcao, int carta, float pop1, float pop2, float area1, float area2, float pib1, float pib2, int pt1, int pt2, float dens1, float dens2) {
        switch (opcao) {
            case 1: return carta == 1 ? pop1 : pop2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? pib1 : pib2;
            case 4: return carta == 1 ? pt1 : pt2;
            case 5: return carta == 1 ? dens1 : dens2;
            default: return 0;
        }
    }

    // Atribuindo os valores dos atributos selecionados
    valor1_c1 = getValor(op1, 1, Populacao_01, Populacao_02, Area_01, Area_02, PIB_01, PIB_02, Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02, densidade_01, densidade_02);
    valor1_c2 = getValor(op1, 2, Populacao_01, Populacao_02, Area_01, Area_02, PIB_01, PIB_02, Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02, densidade_01, densidade_02);
    valor2_c1 = getValor(op2, 1, Populacao_01, Populacao_02, Area_01, Area_02, PIB_01, PIB_02, Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02, densidade_01, densidade_02);
    valor2_c2 = getValor(op2, 2, Populacao_01, Populacao_02, Area_01, Area_02, PIB_01, PIB_02, Numero_de_pontos_turisticos_01, Numero_de_pontos_turisticos_02, densidade_01, densidade_02);

    // Comparações com regras
    int v1 = (op1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    int v2 = (op2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);

    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    // Resultado
    printf("\n--- Comparação ---\n");
    printf("Cidade 1: %s\nCidade 2: %s\n\n", Nome_da_cidade_01, Nome_da_cidade_02);

    printf("Atributo 1: ");
    switch (op1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", Nome_da_cidade_01, valor1_c1, Nome_da_cidade_02, valor1_c2);

    printf("Atributo 2: ");
    switch (op2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", Nome_da_cidade_01, valor2_c1, Nome_da_cidade_02, valor2_c2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n", Nome_da_cidade_01, soma_c1, Nome_da_cidade_02, soma_c2);

    printf("\nResultado Final: ");
    soma_c1 > soma_c2 ? printf("%s venceu!\n", Nome_da_cidade_01) :
    soma_c2 > soma_c1 ? printf("%s venceu!\n", Nome_da_cidade_02) :
                        printf("Empate!\n");

    return 0;
}