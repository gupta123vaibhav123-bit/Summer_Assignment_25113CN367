#include<stdio.h>
int main(){
    char str[100];
    int i=0,words=0;
    printf("Enter a sentence: ");
    gets(str);

    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0'){
            words++;   // space found, next char is a new word
        }
        i++;
    }
    words++;   // count the last word too

    printf("Number of words = %d",words);
    return 0;
}