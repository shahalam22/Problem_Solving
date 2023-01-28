#include <stdio.h>
int main(){
    int i, j;
    int k=1, l=0;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==3 || j==3) printf("%d", l);
            else printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}