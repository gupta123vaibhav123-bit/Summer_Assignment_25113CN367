#include<stdio.h>
int factorial(int);
int main(){
    int n,fact;
    printf("enter the no whose factorial is to be calculated:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("the factorial of  %d is=%d",n,fact);
    return 0;
}
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}