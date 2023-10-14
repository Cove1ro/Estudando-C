#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main(){
    
    int t, i, j;
    
    printf("Digite um '#' para sair.\n");
    
    for (t=0; t<MAX; t++){
        printf("%d: ", t);
        scanf("%s", text[t]);
        if(text[t][0]=='#')break; // Sai com linha em branco
    }
    
    for (i=0; i<t; i++){
        for (j=0; text[i][j]; j++){
            putchar(text[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}
