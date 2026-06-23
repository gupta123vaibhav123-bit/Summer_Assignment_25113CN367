#include<stdio.h>
#include<math.h>
int Armstrong(int);
int main(){
    int n,l,s;
    printf("enter the no:");
    scanf("%d",&n);
    l=n;
    s=Armstrong(n);
    if(s==l){
        printf("the %d is a armstrong no",s);
    }
    else{
        printf("%d is not a armstrong no",l);
    }
}
int Armstrong(int n){
    int temp,count=0,d=0,sum=0;
    temp=n;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0){
        d=temp%10;
        sum=sum+(int)round(pow(d,count));  
        temp=temp/10;          
    }
    return sum;
}