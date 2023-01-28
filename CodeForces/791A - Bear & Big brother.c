#include <stdio.h>
int main(){
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i=0; ; i++){
        if(a>b) break;
        else {
            a=3*a;
            b=2*b;
        }
    }
    printf("%d", i);
}