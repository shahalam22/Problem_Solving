#include <stdio.h>

int main(){
    
    FILE *fp;
    char ch;
    
    fp = fopen("text.txt", "r");
    
    if(fp==NULL){
        printf("Can't open desired file.\n");
    }
    else{
        printf("File has opened successfully.\n");
        
        while(!feof(fp)){
            ch = fgetc(fp);
            printf("%c", ch);
        }
        
        //printf("File has rode successfully.\n");
    }
    return 0;
}