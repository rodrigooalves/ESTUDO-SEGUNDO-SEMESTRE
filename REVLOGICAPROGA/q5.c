// Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor

#include <stdio.h>

int main () {
    int idade;
    printf("Digite a idade para descobrir se é maior de idade ou menor de idade:\n");
    scanf("%d", &idade);

    
    if(idade < 0) {
        printf("Idade incompatível");
    } else if(idade < 18) {
        printf ("Menor de idade");
    }else{
        printf("Maior de idade");
    }

return 0;
}