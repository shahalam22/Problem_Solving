#include <stdio.h>
#include <string.h>
int main(){
    char a[10], b[10];
    int i, len;
    int carry=1;
    
    printf("Enter a binary number : ");
    scanf("%s", a);
    len = strlen(a);
    for(i=0; i<len; i++){
        if(a[i]=='0') a[i]='1';
        else a[i]='0';
    }
    for(i=len-1; i>=0; i--){
        if(a[i]=='1' && carry==1){
            b[i]='0';
            carry=1;
        }
        else if(a[i]=='0' && carry==1){
            b[i]='1';
            carry=0;
        }
        else if(a[i]=='1' && carry==0){
            b[i]='1';
            carry=0;
        }
        else{
            b[i]='0';
            carry=0;
        }
    }
    printf("Binary number is %s\n", a);
    printf("2's complement is %s\n", b);
    
    return 0;
}