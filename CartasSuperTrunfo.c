#include <stdio.h>

// Estrutura que representa uma carta
struct Carta {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Cadastro da primeira carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da Segunda Carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Escolha do atributo para comparar
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolha);

    // Comparação
    printf("\nResultado da comparação:\n");

    if (escolha == 1) {
        if (carta1.populacao > carta2.populacao) {
            printf("Carta %s venceu com maior população!\n", carta1.codigo);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Carta %s venceu com maior população!\n", carta2.codigo);
        } else {
            printf("Empate na população!\n");
        }
    }

    if (escolha == 2) {
        if (carta1.area > carta2.area) {
            printf("Carta %s venceu com maior área!\n", carta1.codigo);
        } else if (carta2.area > carta1.area) {
            printf("Carta %s venceu com maior área!\n", carta2.codigo);
        } else {
            printf("Empate na área!\n");
        }
    }

    if (escolha == 3) {
        if (carta1.pib > carta2.pib) {
            printf("Carta %s venceu com maior PIB!\n", carta1.codigo);
        } else if (carta2.pib > carta1.pib) {
            printf("Carta %s venceu com maior PIB!\n", carta2.codigo);
        } else {
            printf("Empate no PIB!\n");
        }
    }

    if (escolha == 4) {
        if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
            printf("Carta %s venceu com mais pontos turísticos!\n", carta1.codigo);
        } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
            printf("Carta %s venceu com mais pontos turísticos!\n", carta2.codigo);
        } else {
            printf("Empate em pontos turísticos!\n");
        }
    }

    return 0;
}