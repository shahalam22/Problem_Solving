#include <stdio.h>
int main(){
    unsigned long a[4];
    int b[4]={0,0,0,0};
    int i, j, count=0;
    for(i=0; i<4; i++){
        scanf("%lu", &a[i]);
    }
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(a[i]==a[j]) b[j]=1;
        }
    }
    for(i=0; i<4; i++){
        count = count + b[i];
    }
    printf("%d", count);
    return 0;
}