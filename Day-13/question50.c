#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],sum=0;
    float avg;
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("the sum =%d and avg=%f",sum,avg);
    return 0;
}