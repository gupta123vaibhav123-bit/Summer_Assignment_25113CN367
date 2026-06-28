#include<stdio.h>
int main(){
    int i,j,n,start,end,temp;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    start=0;
    end=n-1;
    while(start<end){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
