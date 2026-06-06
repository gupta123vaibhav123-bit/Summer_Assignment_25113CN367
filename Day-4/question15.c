#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,s=0,f,digits=0;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        digits++;
        temp=temp/10;
    }

    temp=n;  
    while(temp>0){
        f=temp%10;
        s=s+(int)pow(f,digits);
        temp=temp/10;
    }

    if(n==s)
        printf("it is armstrong no");
    else
        printf("it is not a armstrong no");

    return 0;
}