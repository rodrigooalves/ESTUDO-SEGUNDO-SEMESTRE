// Faça um programa que leia a idade de uma pessoa e informe de 
//ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada

#include <stdio.h>

int main() {
    int idade;
    
    do {
        printf("Digite a idade (ou um valor negativo para sair): ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            printf("Programa encerrado.\n");
            break; // Sai do loop quando idade for negativa
        } else if (idade < 18) {
            printf("Menor de idade.\n");
        } else {
            printf("Maior de idade.\n");
        }
    } while (1); // Loop infinito (encerra com break)
    
    return 0;
}