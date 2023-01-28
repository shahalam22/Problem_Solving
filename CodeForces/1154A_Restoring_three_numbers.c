#include <stdio.h>
int main(){
    int a[4], i, j, temp;
    for(i=0; i<4; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<4; i++){
        for(j=i; j<4; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d %d %d", ((a[0]+a[1]-a[2])/2), ((a[0]+a[2]-a[1])/2), ((a[1]+a[2]-a[0])/2));
    return 0;
}
