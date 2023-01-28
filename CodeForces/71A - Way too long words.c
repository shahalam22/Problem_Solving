#include <stdio.h>
#include <string.h>
int main(){
    int i, len, n;
    scanf("%d", &n);
    char ara[n][100]; 
    int b[n];
    for(i=0; i<n; i++){
        scanf("%s", ara[i]);
    }
    
    for(i=0; i<n; i++){
        b[i]=strlen(ara[i]);
    }
    
    for(i=0; i<n; i++){
        if(b[i]>10){
            printf("%c%d%c\n", ara[i][0], b[i]-2, ara[i][b[i]-1]);
        }
        else{
            printf("%s\n", ara[i]);
        }
    }
    
    return 0;
}