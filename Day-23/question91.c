#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int count[256]={0};   // ASCII array to count characters
    int i,len1,len2,flag=1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len1=strlen(str1);
    len2=strlen(str2);

    if(len1!=len2){
        printf("Not Anagram (different lengths)");
        return 0;
    }

    // count characters of str1
    for(i=0;i<len1;i++){
        count[(int)str1[i]]++;
    }

    // subtract characters of str2
    for(i=0;i<len2;i++){
        count[(int)str2[i]]--;
    }

    // if all counts are 0, it's anagram
    for(i=0;i<256;i++){
        if(count[i]!=0){
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("Anagram Strings");
    }else{
        printf("Not Anagram Strings");
    }
    return 0;
}