//swaping number using for loop

#include <stdio.h>
int main(){
    int i, num=48385773, d, p=0;
    for(i=1; num!=0; i++){
        d=num%10;
        num=num/10;
        p = p*10 + d;
    }
    printf("%d", p);
    return 0;
}