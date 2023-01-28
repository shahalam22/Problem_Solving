#include <stdio.h>
#include <string.h>
int main(){
    int i, len;
    char a[101], b[101], c[101];
    scanf("%s", a);
    scanf("%s", b);
    len = strlen(a);
    for(i=0; i<len; i++){
        if(a[i]==b[i]) c[i]='0';
        else c[i]='1';
    }
    for(i=0; i<len; i++){   
        printf("%c", c[i]);
    }    
    return 0;
}