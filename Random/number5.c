#include <stdio.h>
int main(){
    int i, j;
    int k=1, l=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i==2 && j==2) printf("%d", l);
            else printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}