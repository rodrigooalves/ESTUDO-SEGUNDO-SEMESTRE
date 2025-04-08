#include <stdio.h>
#include <stdlib.h>

int main () {
    int * valores; // criando uma variavel valores que vai ser o ponteiro
    int a = 10;
    printf("A = %d\n", a);

    valores = &a;// VALORES RECEBE O CONTEUDO DE A
    printf("A = %d\n", a);

    a = 30;
    printf("A = %d\n", a);
    printf("*valores = %d\b", *valores);

    printf("endereço de valores: %p\n", valores); // IMPRIME O ENDEREÇO DA VARIAVEL

    *valores = 80; // digo ao ponteiro que naquele endereço irá substituir o antigo valor por 80
    printf("A = %d\n", a);
return 0;
}