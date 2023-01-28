#include <stdio.h>
int main(){
    int i, j;
    for(i=0; i<5; i++){
        for(j=5; j>=5-i; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}