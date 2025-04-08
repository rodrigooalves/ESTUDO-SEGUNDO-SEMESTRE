// VAMOS FAZER O USO DO INSERTION SORT
// ALINHANDO PONTEIROS E USANDO O TIME 
// PARA GERAR NUMEROS ALEATORIOS.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um array de números aleatórios
int * generate_random_array(int size) {
    int * result = malloc(size * sizeof(int)); // Aloca memória para o array
    for (int i = 0; i < size; i++) { // Preenche o array com números aleatórios
        result[i] = rand() % 500; // Números aleatórios de 0 a 499
    }
    return result; // Retorna o ponteiro para o array
}

// Função de ordenação Insertion Sort
void insertion_sort(int *A, int length) {
    for (int j = 1; j < length; j++) { // Começa do segundo elemento
        int key = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] < key) { // Ordenação em ordem decrescente
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key; // Insere o elemento na posição correta
    }
}

// Função para imprimir o array
void print_array(char *option, int *A, int length) {
    printf("%s: [", option);
    for (int i = 0; i < length; i++) {
        if (i == length - 1) {
            printf("%d", A[i]); // Último elemento sem vírgula
        } else {
            printf("%d, ", A[i]); // Elementos separados por vírgula
        }
    }
    printf("]\n");
}

int main() {
    int size;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printf("Informe o tamanho do array: \n");
    scanf("%d", &size);

    int *valores = generate_random_array(size); // Gera o array aleatório
    print_array("Antes", valores, size); // Imprime o array antes da ordenação
    insertion_sort(valores, size); // Ordena o array
    print_array("Depois", valores, size); // Imprime o array após a ordenação

    free(valores); // Libera a memória alocada
    return 0;
}


// VAMOS FAZER O USO DO INSERTION SORT
// ALINHANDO PONTEIROS E USANDO O TIME 
// PARA GERAR NUMEROS ALEATORIOS.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int * generate_random_array (int size) {
//     int * result = malloc(size * sizeof(int));// SIZE É A MINHA VARIAVEL. PODEIRA SER QUALQUER VARIAVEL NO LUGAR DELA
//     for(int i = 0; i < size; i++){ // SIZE DEFINIDO PELO USUARIO, ENQUANTO ESSE ARRAY NAO FOR PREENCHIDO ESTARA NO LOOP.
//         result[i] = rand()%500;//VAI ADICIONAR NO VERTOR RESULT, NUMEROS QUE VARIAM ATE 500.
//     }
// }

// //INSERTIO SORT
// void insertion_sort(int *A, int length){
//     for ( int j = 0; j < length; j++) {
//         int key = A[j];
//         int i = j - 1;
//         while (i >= 0 && A[i] < key) {
//             A[i + 1] = A[i];
//             i--;
//         }
//         A[i++] = key;
//     }
// }

// //VOID PRINT ARRAY
// void print_array( char * option, int * A, int length) {
//     printf("%s: [", option);
//     for(int i = 0; i < length; i++) {
//         if(i == length - 1){
//             print("%d", A[i]);
//         } else {
//             printf("%d, "A[i]);
//         }
//     }
//     printf("]\n");
// }

// int main() {

//     int size;
//     srand(time(NULL));
    
//     printf("Informe o tamanho do array: \n");
//     scanf("%d", &size);

//     int * valores = generate_random_array(size);
//     print_array("Antes", valores, size);
//     insertion_sort(valores,size);
//     print_array("Depois",valores,size);

// return 0;
// }