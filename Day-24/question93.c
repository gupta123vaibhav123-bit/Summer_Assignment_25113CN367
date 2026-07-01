
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0,count;
    printf("Enter the string: ");
    gets(str);

    printf("Compressed string: ");
    while(str[i]!='\0'){
        count=1;
        while(str[i]==str[i+1]){    
            count++;
            i++;
        }
        printf("%c",str[i]);
        if(count>1){
            printf("%d",count);     
        }
        i++;
    }

    return 0;
}