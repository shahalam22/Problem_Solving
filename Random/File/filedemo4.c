#include <stdio.h>

int main(){
    
    FILE *fp;
    char name[20];
    int age;
    
    fp = fopen("text.txt", "w");
    
    if(fp==NULL){
        printf(" Can't open your desired file.\n");
    }
    else{
        printf("File has opened successfully.\n");
        
        printf("Enter your name: \n");
        gets(name);
        printf("Enter your age: \n");
        scanf("%d", &age);
        
        fprintf(fp,"Name: %s, Age: %d\n", name, age);
        
        printf("File has written successfully.\n");
        fclose(fp);
    }    
    return 0;
}