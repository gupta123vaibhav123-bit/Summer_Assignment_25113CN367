#include<stdio.h>
int fact(int);
int main(){
    int n,s;
    printf("enter the no whose factorial is to be calculated:");
    scanf("%d",&n);
    s=fact(n);
    printf("the factorial of %d is=%d",n,s);
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}