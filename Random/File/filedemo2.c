#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *fp;
    char name[20] = "Shah Alam Abir";
    int len = strlen(name);
    int i;
    
    fp = fopen("text.txt", "r");
    
    if(fp == NULL){
        printf("Can't find that file you wanted.\n");
    }
    else{
        printf("File has been opened.\n");
        
        for(i=0; i<len; i++){
            fputc(name[i], fp);
        }
        
        printf("File has written successfully.\n");
        
        fclose(fp);
    }
    
    return 0;
}