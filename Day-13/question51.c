#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],sum=0,max,min;
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<=n-1;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("the maximum element is :%d and the minimum element is:%d",max,min);
    return 0;
}