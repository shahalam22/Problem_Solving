#include <stdio.h>
int main(){
    int i, j, k, row=10;
    for(i=1; i<=row; i++){
        for(j=i; j<=row; j++){
            printf("*");
        }
        for(k=1; k<i; k++){
            printf("  ");
        }
        for(j=i; j<=row; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(k=i; k<row; k++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}