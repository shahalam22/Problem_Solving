#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    int i, len;
    printf("Enter a binary number : ");
    gets(a);
    len = strlen(a);
    for(i=0; i<len; i++){
        if(a[i]=='0') a[i]='1';
        else if(a[i]=='1') a[i]='0';
    }
    for(i=0; i<len; i++){
        printf("%c", a[i]);
    }
    return 0;
}