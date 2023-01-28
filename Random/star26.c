#include <stdio.h>
int main(){
    int i, j, row=13;
    for(i=1; i<=row; i++){
        for(j=1; j<=row; j++){
            
            if(j==(row/2)+1 || i==(row/2)+1) printf("+");
            else printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}