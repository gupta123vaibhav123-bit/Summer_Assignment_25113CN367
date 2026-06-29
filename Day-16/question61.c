#include<stdio.h>
int main(){
    int i,n,a[100],sum=0,f,missingno;
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    f=((n+1)*(n+2))/2;
    missingno=f-sum;
    printf("The missing no is:%d",missingno);
    return 0;
}