// Faça um programa que leia a idade de duas pessoas e imprima a soma das idade

#include <stdio.h> 

int main () {
    int n1,n2;
    printf("Digite a idade 1\n");
    scanf("%d", &n1);
    printf("Digite a idade 2\n");
    scanf("%d", &n2);

    int soma = n1 + n2;
    printf ("A soma de %d + %d = %d", n1,n2,soma);

return 0;
}