#include<stdio.h>
#include<string.h>
int main(){
    char str[200],word[50],longest[50]="";
    int i=0,j=0;

    printf("Enter a sentence: ");
    gets(str);

    for(i=0;i<=strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            word[j]=str[i];   // build current word
            j++;
        }
        else{
            word[j]='\0';     // end current word
            if(strlen(word)>strlen(longest)){
                strcpy(longest,word);   // update longest word
            }
            j=0;   // reset for next word
        }
    }

    printf("Longest word = %s",longest);
    return 0;
}