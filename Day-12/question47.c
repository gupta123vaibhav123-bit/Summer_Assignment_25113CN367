#include<stdio.h>
int fibo(int);
int main(){
    int a=1,b=1,sum=0,i,n,c;
    printf("enter the no");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int n){
    int i,c,a=1,b=1;
     for(i=1;i<=n;i++){
        printf("the no is =%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}