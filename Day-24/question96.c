#include<stdio.h>
#include<string.h>
int main(){
    char str[100],result[100];
    int i,j,k=0,found;

    printf("Enter the string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        found=0;
        for(j=0;j<k;j++){
            if(str[i]==result[j]){
                found=1;   // already added
                break;
            }
        }
        if(found==0){
            result[k]=str[i];   // add only if not already present
            k++;
        }
    }
    result[k]='\0';

    printf("String after removing duplicates: %s",result);
    return 0;
}