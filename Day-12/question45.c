#include<stdio.h>
int palindrome(int);
int main(){
    int n,rev,temp;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    rev=palindrome(n);
    if(rev==temp){
        printf("the palindrome no is:%d",rev);
    }
    else{
        printf("the %d is not palindrome",temp);
    }
}
int palindrome(int n){
    int r=0,d;
    while(n>0){
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return r;
}