#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j,count,len;
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++){
        count=0;
        for(j=0;j<len;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>1){
            printf("First repeating character = %c",str[i]);
            break;
        }
    }

    return 0;
}