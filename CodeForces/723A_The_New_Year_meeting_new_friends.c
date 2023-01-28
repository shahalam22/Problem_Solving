#include <stdio.h>
int main(){
    int a[3], i, j, temp;
    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<3; i++){
        for(j=i; j<3; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d", (a[2]-a[0]));
    return 0;
}
