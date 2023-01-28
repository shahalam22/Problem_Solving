#include <stdio.h>
#include <string.h>
int main(){
    int i, j, len, flag=0;
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    len=strlen(a);
    int c[len], d[len];
    for(i=0; i<len; i++){
        if(a[i]>='a' && a[i]<='z'){
            c[i]=a[i]-'a';
        }
        else if(a[i]>='A' && a[i]<='Z'){
            c[i]=a[i]-'A';
        }
    }
    
    for(i=0; i<len; i++){
        if(b[i]>='a' && b[i]<='z'){
            d[i]=b[i]-'a';
        }
        else if(b[i]>='A' && b[i]<='Z'){
            d[i]=b[i]-'A';
        }
    }
    
    for(i=0; i<len; i++){
        if(c[i]>d[i]){
            flag=1;
            break;
        }
        else if(c[i]<d[i]){
            flag=2;
            break;
        }
    }
    
    if(flag==1) printf("1");
    else if(flag==2) printf("-1");
    else printf("0");
    return 0;
}