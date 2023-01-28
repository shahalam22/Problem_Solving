#include <stdio.h>
int main(){
    int i, j, k;
    for(i=0; i<5; i++){
        k=i+1;
        for(j=0; j<=i; j++){
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}