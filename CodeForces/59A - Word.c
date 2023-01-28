#include <stdio.h>
#include <string.h>
int main(){
    int i, j=0, k=0, len;
    char a[100];
    scanf("%s", a);
    len=strlen(a);
    for(i=0; i<len; i++){
        if(a[i]>='a' && a[i]<='z') j++;
        else if(a[i]>='A' && a[i]<='Z') k++;
    }
    if(j>=k){
        for(i=0; i<len; i++){
            if(a[i]>='A' && a[i]<='Z'){
               a[i]=a[i]-'A'+'a'; 
            }
        }
    }
    else if(j<k){
        for(i=0; i<len; i++){
            if(a[i]>='a' && a[i]<='z'){
               a[i]=a[i]-'a'+'A'; 
            }
        }
    }
    
    printf("%s", a);
    return 0;
}