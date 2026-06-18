#include<stdio.h>
int sum(int,int);
int main(){
    int a,b,c;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("the sum of two no is:%d",c);
    return 0;
}
int sum(int x,int y){
    int m;
    m=x+y;
    return m;
}