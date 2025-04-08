#include <stdio.h>
#define TAM 3

// Estrutura para armazenar idade e sexo dos animais
typedef struct {
    int idade[TAM];
    char sexo[TAM];
} Animal;

int main() {
    Animal animal;
    int i, media;
    int sair = 0;
    int opcao;
    int qtd = 0;
    int soma = 0;

    while (!sair) { // sair == 0 OU sair != 1
        printf("\n### Opções ###\n");
        printf("### 1. Cadastro de animais ###\n");
        printf("### 2. Relatório com idade e sexo ###\n");
        printf("### 3. Relatório com média dos animais ###\n");
        printf("### 4. Relatório com idade maior que a média ###\n");
        printf("### 0. SAIR ###\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Cadastro de idade/sexo
                if (qtd < TAM) {
                    printf("Digite a idade do animal: \n");
                    scanf("%d", &animal.idade[qtd]);
                    getchar(); // Consumir o '\n' deixado pelo scanf
                    printf("Digite o sexo do animal (M/F): \n");
                    scanf("%c", &animal.sexo[qtd]);
                    qtd++;
                    printf("Animal cadastrado com sucesso!\n\n");
                } else {
                    printf("Limite de animais cadastrados atingido.\n");
                }
                break;

            case 2: // Relatório dos animais com idade e sexo
                if (qtd > 0) {
                    printf("Imprimindo todos os animais:\n");
                    for (i = 0; i < qtd; i++) {
                        printf("%d° Animal: Idade: %d, Sexo: %c\n", i + 1, animal.idade[i], animal.sexo[i]);
                    }
                } else {
                    printf("Nenhum animal cadastrado.\n");
                }
                break;

            case 3: // Relatório com média dos animais
                if (qtd > 0) {
                    soma = 0; // Reinicializar soma
                    for (i = 0; i < qtd; i++) {
                        soma += animal.idade[i];
                    }
                    media = soma / qtd;
                    printf("Média das idades: %d\n\n", media);
                } else {
                    printf("Nenhum animal cadastrado para calcular a média.\n");
                }
                break;

            case 4: // Relatório com idade maior que a média
                if (qtd > 0) {
                    soma = 0; // Reinicializar soma
                    for (i = 0; i < qtd; i++) {
                        soma += animal.idade[i];
                    }
                    media = soma / qtd;
                    printf("Animais com idade acima da média:\n");
                    int found = 0;
                    for (i = 0; i < qtd; i++) {
                        if (animal.idade[i] > media) {
                            printf("Animal %d = Idade %d - Sexo %c\n", i + 1, animal.idade[i], animal.sexo[i]);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Não há idades maiores que a média.\n");
                    }
                } else {
                    printf("Nenhum animal cadastrado para calcular a média.\n");
                }
                break;

            case 0: // Sair do programa
                sair = 1;
                break;

            default: // Opção inválida
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}