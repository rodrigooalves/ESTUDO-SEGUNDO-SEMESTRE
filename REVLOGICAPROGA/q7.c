//Faça um programa que verifique se um número é primo

#include <stdio.h>

int main () {
    int opcao;

    while ( opcao != -1) {
        printf("Digite um numero positivo para descobrir se é primo ou não: \n");
        printf("para sair digite -1\n");
        scanf("%d", &opcao);
    }

return 0;
}