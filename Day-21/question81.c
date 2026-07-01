#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("ENter the string");
    gets(str);
    int i=0,length;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    printf("The length of the string is = %d",length);
    return 0;
}