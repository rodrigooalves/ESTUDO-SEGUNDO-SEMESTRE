//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas

#include <stdio.h>

int main () {
    int a,b,temp;
    
    printf("digite numero 1\n ");
    scanf("%d", &a);
    printf("digite numero 2\n ");
    scanf("%d", &b);

    printf("Antes\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("Depois: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
return 0;
}