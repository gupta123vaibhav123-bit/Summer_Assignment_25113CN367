#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,l,flag=1;
    printf("Enter the string: ");
    gets(str);

    l=strlen(str);

    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i]){
            flag=0;
            break;
        }
    }

    if(flag==1){
        printf("Palindrome string");
    }else{
        printf("Not a palindrome string");
    }
    return 0;
}