#include <stdio.h>
int main(){
    int i, j, k=9;
    for(i=5; i>=1; i--){
        k=i;
        for(j=1; j<=i; j++){
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}