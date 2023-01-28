#include <stdio.h>
int main(){
    int i, j, k, row=7;
    for(i=1; i<=row;i++){
        if(i%2==1){
            for(k=row-1; k>=i; k--){
                printf(" ");
            }
            for(j=1; j<=i; j++){
                printf(" *");
            }
        }
        printf("\n");
    }
    
    
    for(i=row-1; i>=1;i--){
        if(i%2==1){
            for(k=i+1; k<=row; k++){
                printf(" ");
            }
            for(j=1; j<=i; j++){
                printf(" *");
            }
        }
        printf("\n");
    }
    
    return 0;
}