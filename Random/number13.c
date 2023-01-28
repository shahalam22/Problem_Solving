#include <stdio.h>
int main(){
    int i, j=1;
    int k=1, l=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("%d\t", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}