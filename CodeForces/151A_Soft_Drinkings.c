#include <stdio.h>
int main(){
    int a[8], b[3], i, j, temp;
    for(i=0; i<8; i++){
        scanf("%d", &a[i]);
    }
    b[0] = (a[1]*a[2])/a[6];
    b[1] = a[3]*a[4];
    b[2] = a[5]/a[7];
    for(i=0; i<3; i++){
        for(j=i; j<3; j++){
            if(b[i]>b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("%d", b[0]/a[0]);
    return 0;
}