#include <stdio.h>
int main(){
    int i, j, k;
    for(i=5; i>=1; i--){
        for(j=1; j<=5; j++){
            if(i>=j) printf("%d", j);
            else printf("5");
        }
        printf("\n");
    }
    return 0;
}