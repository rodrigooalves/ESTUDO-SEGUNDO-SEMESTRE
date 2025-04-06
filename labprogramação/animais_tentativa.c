//faça um programa que grave o nome de 10 animais idade e sexo. liste todos e imprima a media

#include <stdio.h>
#define TAM 3
void cadastro() {
    
}

int main () {

    int idade[TAM];
    char sexo[TAM];
    int i,media;
    int sair = 0;
    int opcao;
    int qtd = 0;
    int soma = 0;

    while(!sair) { //sair == 0 OU sair != 1
        printf("\n### Opções ###\n");
        printf("### 1. Cadastro de animais ###\n");
        printf("### 2. Relatório com idade e sexo ###\n");
        printf("### 3. Relatorio com media dos animais ###\n");
        printf("### 4. Relatorio com idade maior que a media ###\n");
        printf("### 0. SAIR  ###\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // CADASTRO DE IDADE/SEXO :
                if (qtd < TAM) {
                    printf("Digite a idade do animal: \n");
                    scanf("%d", &idade[qtd]);
                    getchar();
                    printf("Digite o sexo do animal: \n");
                    scanf("%c", &sexo[qtd]);
                    qtd++;
                    printf("Animal cadastrado com sucesso!\n\n");
                }
                else {
                    printf("Limite de animais cadastrados atingido.\n");
                }
                break;

                case 2: //RELATORIO DOS ANIMAIS COM IDADE E SEXO :
                printf("Imprimindo todos os animais\n");
                for( i = 0; i < qtd; i++) {
                    printf(" %d Animal: Idade: %d , Sexo: %c\n", i+1,idade[i],sexo[i]);
                }   
                break;

            case 3: // RELATORIO MEDIA DOS ANIMAIS :
                for( i = 0; i < qtd; i++ ) {
                    soma += idade[i];
                }
                media = soma / qtd;
                printf("Media das idades: %d\n\n", media);
                break;
            
            case 4: // RELATORIO MEDIA MOSTRANDO OS QUE ESTÃO ACIMA DA MEDIA :
                printf("Animais com idade acima da média:\n");
                int found = 0;
                for(i = 0; i < qtd; i++) {
                    if (idade[i] > media){
                        printf("Animal %d = Idade %d - Sexo %c\n",i+1, idade[i], sexo[i]);
                        found = 1;
                    }
                }
                if(!found){
                    printf("Nao ha idades maiores que a media.\n");
                    }
                break;

            case 0:
                sair = 1;
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }

return 0;
}


// !0 = 1 FALSE VIRA TRUE NEGAÇÃO
// !1 = 0 TRUE VIRA FALSE NEGAÇÃO
