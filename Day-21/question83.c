#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],temp;
    printf("Enter the string = ");
    gets(str1);
    int i=0,l=0,j,vowels=0,consonents=0;
    while(str1[i]!='\0'){
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'){
            vowels++;

        }
        else if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z')){
        consonents++;   
    }
        i++;
    }
    printf("The vowels and consonents in the string is = %d,%d",vowels,consonents);
    return 0;
}