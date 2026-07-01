#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],combined[200];
    int len1,len2;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len1=strlen(str1);
    len2=strlen(str2);

    if(len1!=len2){
        printf("Not a rotation (different lengths)");
        return 0;
    }

    // concatenate str1 with itself
    strcpy(combined,str1);
    strcat(combined,str1);

    // check if str2 is a substring of combined
    if(strstr(combined,str2)!=NULL){
        printf("String is a rotation!");
    }else{
        printf("Not a rotation");
    }

    return 0;
}