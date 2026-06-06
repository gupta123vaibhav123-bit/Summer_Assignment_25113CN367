#include<stdio.h>
int main(){
    int i,n,s=0,f,fact=1,temp;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        f=n%10;
        fact=1;
        for(i=1;i<=f;i++){
            fact=fact*i;
        }
        s=s+fact;
        n=n/10;
    }
    
    if(s==temp){
        printf("it is a strong  no");
    }
    else{
        printf("not a strong no");
    }
    return 0;
}