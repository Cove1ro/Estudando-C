#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");

    while (a < 1 || a > 3){
        printf("(1) Matriz Dimensionada\n(2) Matriz não Dimensionada\n(3) Outro exemplo de MND\n");
        scanf("%d", &a);
    }
    //Matriz Dimensionada
    if (a == 1){
        printf("-------------------------\n");
        printf("Matriz Dimensionada\n");
        char e1[17] = "Erro de leitura";
        char e2[17] = "Erro de escrita";
        char e3[29] = "Arquivo não pode ser aberto";

        printf("%s\n%s\n%s", e1, e2, e3);
        printf("\n");
    }
    //Matriz não Dimensionada
    if (a == 2){
        printf("-------------------------\n");
        printf("Matriz não Dimensionada\n");
        char e1[] = "Erro de leitura";
        char e2[] = "Erro de escrita";
        char e3[] = "Arquivo não pode ser aberto";

        //printf("%s\n%s\n%s\n", e1, e2, e3);
        printf("%s tem comprimento %d\n", e1, sizeof e1);
        printf("%s tem comprimento %d\n", e2, sizeof e2);
        printf("%s tem comprimento %d\n", e3, sizeof e3);
        printf("\n");
    }
    //Matriz não Dimensionada 2
    if (a == 3){
        int sqrs[][2] = {
            1, 1,
            2, 4,
            3, 9,
            4, 16,
            5, 25,
            6, 36,
            7, 49,
            8, 64,
            9, 81,
            10, 100,
        };
        printf("-------------------------\n");
        printf("Matriz não Dimensionada 2\n");
        for (int i = 0; i < 10; i++){
            printf("%-2d | %-4d\n", sqrs[i][0], sqrs[i][1]);
        }

    }
    return 0;
}
