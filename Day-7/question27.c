#include<stdio.h>
int sum(int);
int main(){
    int n,f;
    printf("enter the no:");
    scanf("%d",&n);
    f=sum(n);
    printf("the sum of digits of the no is:%d",f);
    return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}