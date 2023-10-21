#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");

    while (a < 1 || a > 2){
        printf("(1) Matriz Dimensionada\n(2) Matriz não Dimensionada\n");
        scanf("%d", &a);
    }
    if (a == 1){
        printf("-------------------------\n");
        printf("Matriz Dimensionada\n");
        char e1[17] = "Erro de leitura";
        char e2[17] = "Erro de escrita";
        char e3[29] = "Arquivo não pode ser aberto";

        printf("%s\n%s\n%s", e1, e2, e3);
        printf("\n");
    }

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
    return 0;
}
