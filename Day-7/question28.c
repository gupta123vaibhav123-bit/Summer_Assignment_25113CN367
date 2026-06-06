#include<stdio.h>
int reverse(int,int);
int main(){
    int n,i,s;
    printf("enter no to be reversed :");
    scanf("%d",&n);
    s=reverse(n,0);
    printf("the reversed no is:%d",s);
    return 0;
}
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    else{
        return(reverse(n/10,rev*10+n%10));
    }
}