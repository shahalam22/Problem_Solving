#include <stdio.h>

int main(){
    
    FILE *fp;
    char fname[20];
    char lname[20];
    int age;
    
    fp = fopen("text.txt", "r");
    
    if(fp == NULL){
        printf("Can't open your desired file.\n");
    }
    else{
        printf("File opened successfully.\n");
        fscanf(fp, "%s %s %d", &fname, &lname, &age);
        printf("%s %s %d", fname, lname, age);
        
        fclose(fp);
    }
}