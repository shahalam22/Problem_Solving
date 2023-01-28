#include <stdio.h>
#include <string.h>
int main(){
    int i, j, len;
    char ara[100], temp;
    scanf("%s", ara);
    len = strlen(ara);
    for(i=0; i<len; i=i+2){
        for(j=0; j<len; j=j+2){
            if(ara[i]<ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    printf("%s", ara);
    return 0;
}
