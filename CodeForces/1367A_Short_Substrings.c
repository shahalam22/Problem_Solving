#include <stdio.h>
#include <string.h>
int main(){
    int n, i, j, len, k;
    scanf("%d", &n);
    char str[n][1000], str1[n][1000];
    for(i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    for(i=0; i<n; i++){
        len = strlen(str[i]);
        str1[i][0]=str[i][0];
        str1[i][(len/2)+1]=str[i][len];
        for(j=1, k=1; j<len; j=j+2, k++){
            str1[i][k]=str[i][j];
        }
    }
    for(i=0; i<n; i++){
        printf("%s\n", str1[i]);
    }
    return 0;
}