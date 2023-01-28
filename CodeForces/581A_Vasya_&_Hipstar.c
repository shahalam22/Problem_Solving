#include <stdio.h>
int main(){
    int a, b, max, min;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        max=a;
        min=b;
        printf("%d %d", min, (max-min)/2);
        return 0;
    }
    else if(b>a){
        max=b;
        min=a;
        printf("%d %d", min, (max-min)/2);
        return 0;
    }
    else if(a=b){
        printf("%d %d", a, 0);
        return 0;
    }
    return 0;
}