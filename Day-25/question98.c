#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int count1[256]={0},count2[256]={0};
    int i,len1,len2;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len1=strlen(str1);
    len2=strlen(str2);

    for(i=0;i<len1;i++){
        count1[(int)str1[i]]++;
    }
    for(i=0;i<len2;i++){
        count2[(int)str2[i]]++;
    }

    printf("Common characters: ");
    for(i=0;i<256;i++){
        if(count1[i]>0 && count2[i]>0){
            printf("%c ",i);
        }
    }

    return 0;
}