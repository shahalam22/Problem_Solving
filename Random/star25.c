#include <stdio.h>

int main(){
    int i, j, row=5, k;
    for(i=1; i<=row; i++){
        for(k=i; k<=row; k++){
            printf("  ");
        }
        for(j=i; j<=row; j++){
            printf("*");
        }
        printf("\n\n");
    }
    for(i=2; i<=row; i++){
        for(k=1; k<=i; k++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n\n");
    }
    
    return 0;
}