#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],temp;
    printf("Enter the string = ");
    gets(str1);
    int i=0,l=0,j;
    while(str1[i]!='\0'){
        l++;
        i++;
    }
    for(i=0,j=l-1;i<j;i++,j--){   
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
    }
    printf("the reversed string=%s",str1);
    return 0;
}