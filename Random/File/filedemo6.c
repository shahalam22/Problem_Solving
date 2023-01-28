#include <stdio.h>

int main(){
    
    FILE *fp; 
    char ch[40];
    
    fp = fopen("text.txt", "r");
    
    if(fp==NULL){
        printf("File can't open.\n");
    }
    else{
        printf("File opened successfully.\n");
        
        while(!feof(fp)){
            fgets(ch, 39, fp);
            printf("%s\n", ch);
        }
        
        fclose(fp);
    }
    return 0;    
}