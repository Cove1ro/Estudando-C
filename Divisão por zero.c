#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Digite dois números: ");
    scanf("%d%d", &a, &b);
    
    if(b) printf("%d\n", a/b);
    else printf("não pode dividir por zero\n");

    return 0;
}
