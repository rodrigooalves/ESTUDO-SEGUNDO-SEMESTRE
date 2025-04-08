#include <stdio.h>

void insertion_sort (int array[], int tamanho) {
    for ( int i = 0; i < tamanho; i++) {
        int chave = array[i]; // Elemento chave a ser posicionado.
        int j = i - 1; // Indice do elemento anterior.

        // move os elementos maiores que a chave para a direita
        while (j >= 0 && array[j] > chave ) {
            array[j + 1] = array[j];
            j--;
        }  
        array [j + 1] = chave; // Insere a chave na posição correta
    }
}

int main (){
    int array [] = {12, 11, 13, 5 ,6};
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    insertion_sort(array, tamanho);

    printf("Array ordenado: \n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}



