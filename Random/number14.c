#include <stdio.h>
int main(){
    int i, j, k;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(i==1 || j==1) printf("5");
            else if(i==2 || j==2) printf("4");
            else if(i==3 || j==3) printf("3");
            else if(i==4 || j==4) printf("2");
            else if(i==5 || j==5) printf("1");
        }
        printf("\n");
    }
    return 0;
}