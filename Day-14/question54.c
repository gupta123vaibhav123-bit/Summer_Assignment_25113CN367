#include<stdio.h>
int main(){
    int m,i,a[100],n,count=0;
    printf("Enter the no of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element whose frequency is to be find = ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            count++;
        }
    }
    printf("The frequency of the element = %d is:%d",m,count);
    return 0;
}