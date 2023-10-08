#include <stdio.h>

int main(){
    
    char ch;
    //ch = '\0';
    for ( ; ; ){
        ch = getchar();
        
        if (ch == 'A' || ch == 'a') break;
    }
    if (ch == 'a'){
        printf("Você digitou um a");
    }
    else {
        printf("Você digitou um A");
    }
    
    return 0;
}
