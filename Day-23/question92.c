#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count[256]={0};
    int i,len,max=0;
    char maxChar;

    printf("Enter the string: ");
    gets(str);
    len=strlen(str);

    // count frequency of each character
    for(i=0;i<len;i++){
        count[(int)str[i]]++;
    }

    // find character with maximum count
    for(i=0;i<len;i++){
        if(count[(int)str[i]]>max){
            max=count[(int)str[i]];
            maxChar=str[i];
        }
    }

    printf("Maximum occurring character = %c (%d times)",maxChar,max);
    return 0;
}