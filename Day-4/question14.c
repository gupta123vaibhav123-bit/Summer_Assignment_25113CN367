#include<stdio.h>
int main(){
    int a=1,b=1,sum=1,i,n;
    printf("enter the no:");
    scanf("%d",&n);
    
    for(i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth fibonnaci term is=%d",n,sum);
    return 0;
}