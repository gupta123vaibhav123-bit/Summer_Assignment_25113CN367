#include<stdio.h>
int main(){
    int i,n,temp;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}