// Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar
// n1 e n2 #include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\na = %d\nb = %d\n", a, b);

    // Troca sem variável auxiliar (método aritmético)
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nDepois da troca:\na = %d\nb = %d\n", a, b);

    return 0;
}
