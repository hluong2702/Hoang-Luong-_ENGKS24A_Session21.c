#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt","a");
    char myText[100];
    printf("Moi ban nhap vao mot chuoi ");
    fgets(myText,100,stdin);
    fprintf(fptr,"%s",myText);
    fclose(fptr);
    return 0;
}