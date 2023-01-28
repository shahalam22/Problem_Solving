#include <stdio.h>
#include <math.h>

int main(){
    int num, i, j, high, d=0, k;
    int bin[100];
    
    printf("Enter a number : ");
    scanf("%d", &num);
    
    for(i=0; ; i++){
        if(pow(2, i)>num) break;
    }
    high = i-1;
    for(j=0; j<i; j++){
        if((d+pow(2,high))>num){
            bin[j]=0;
        }
        else if((d+pow(2,high))<=num){
            bin[j]=1;
            d += pow(2,high);
        }
        high--;
    }
    for(j=0; j<i; j++){
        printf("%d", bin[j]);
    }
    return 0;
}