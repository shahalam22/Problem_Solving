#include <stdio.h>
#include <string.h>
int main(){
    int i, len, j, flag=0;
    char s[101], t[101], a[101];
    
    scanf("%s", s);
    scanf("%s", t);
    
    len = strlen(s);
    
    for(i=0; i<len; i++){
        if(t[len-1-i]!=s[i]){
            flag=1; 
            break;
        }
    }
    
    if(flag==0) printf("YES");
    else printf("NO");
    
    
    return 0;
}