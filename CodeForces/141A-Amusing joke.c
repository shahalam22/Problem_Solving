#include <stdio.h>
#include <string.h>

int main(){
    int i, j, flag=0;
    int len1, len2, len3, sum;
    char a1[100], a2[100], a3[200];
    scanf("%s", a1);
    scanf("%s", a2);
    scanf("%s", a3);
    len1 = strlen(a1);
    len2 = strlen(a2);
    len3 = strlen(a3);
    sum = len1 + len2;
    
    if(sum!=len3){
        printf("NO");
        return 0;
    }
    
    for(i=0; a1[i]; i++){
        for(j=0; a3[j]; j++){
            if(a1[i]==a3[j]){
                a3[j]='1';
                break;
            }
        }
    }
    
    for(i=0; a2[i]; i++){
        for(j=0; a3[j]; j++){
            if(a2[i]==a3[j]){
                a3[j]='1';
                break;
            }
        }
    }
    
    for(i=0; a3[i]; i++){
        if(a3[i]!='1') flag=1;
    }
    if(flag==1) printf("NO");
    else printf("YES");
    return 0;
}