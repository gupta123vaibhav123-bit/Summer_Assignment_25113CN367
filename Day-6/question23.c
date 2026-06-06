#include<stdio.h>
int main(){
    int n,count=0,s,temp;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    while(n){
        s=n%2;
        if(s==1){
            count++;
        }
        n=n/2;
    }
    printf("the set bits in the no %d is = %d",temp,count);
        
    return 0;
}