#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");


    int rows,cols;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &rows);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d" , &cols);

    int matriz[rows][cols];

    // Loop para preencher a matriz
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Digite o valor para a posição (%d %d): ",i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir a matriz
    printf("Matriz inserida: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
