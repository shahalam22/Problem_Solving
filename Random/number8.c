#include <stdio.h>
int main(){
    int i, j, k;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==j) printf("1");
            else if(i<=j && j==6-i) printf("1");
            else if(i>=j && i==6-j) printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}