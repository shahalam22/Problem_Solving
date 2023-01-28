#include <stdio.h>
int main(){
    int i, j;
    int k=1, l=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if((i%2==1 && j%2==1)||(j%2==0 && i%2==0)) printf("%d", k);
            else printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}