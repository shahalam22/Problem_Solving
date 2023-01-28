#include <stdio.h>
int main(){
    long int num;
    int i, n, j;
    scanf("%ld", &num);
    scanf("%d", &n);
    for(i=0; i<n; i++){
        if(num%10==0){
            num = num/10;
        }
        else{
            num = num-1;
        }
    }
    printf("%ld", num);
    return 0;
}