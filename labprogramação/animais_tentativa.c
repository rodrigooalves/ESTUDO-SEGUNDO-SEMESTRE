//faça um programa que grave o nome de 10 animais idade e sexo. liste todos e imprima a media

#include <stdio.h>
#define TAM 3

int main () {

    int idade[TAM];
    char sexo[TAM];
    int i,soma,media;

    // LOOP PARA CADASTRO DE IDADE/SEXO :
    for( i = 0; i < TAM; i++) {
        printf("Digite a idade do animal: \n");
        scanf("%d", &idade[i]);
        getchar();
        printf("Digite o sexo do animal: \n");
        scanf("%c", &sexo[i]);
    }

    //RELATORIO DOS ANIMAIS COM IDADE E SEXO :
    for( i = 0; i < TAM; i++) {
        printf(" %d° Animal: Idade: %d , Sexo: %c\n", i+1,idade[i],sexo[i]);
    }

    // RELATORIO MEDIA DOS ANIMAIS :
    for( i = 0; i < TAM; i++ ) {
        soma += idade[i];
    }
    media = soma / 2;
    printf("Media das idades: %d\n", media);

    // RELATORIO MEDIA MOSTRANDO OS QUE ESTÃO ACIMA DA MEDIA :
    for(i = 0; i < TAM; i++) {
        if (idade[i] > media){
            printf("Idade %d - Sexo %c\n", idade[i], sexo[i]);
        } else {
            printf("Nao ha idades maiores que a media.\n");
        }
    }


return 0;
}


// !0 = 1 FALSE VIRA TRUE NEGAÇÃO
// !1 = 0 TRUE VIRA FALSE NEGAÇÃO
