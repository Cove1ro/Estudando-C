#include <stdio.h>

int main(){

    char nomes[3][20];

    for (int i = 0 ;i < 3; i++){
        printf("Digite um nome: ");
        scanf("%19s", nomes[i]);
    }

    printf("Nomes inseridos:\n");
    for (int i = 0; i < 3; i++){
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}
