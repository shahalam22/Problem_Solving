#include <stdio.h>
int main(){
    int i, j, k, row=7;
    
    for(i=1; i<=row; i++){
        
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i-=1;i>=1;i--){
        
        for(j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}