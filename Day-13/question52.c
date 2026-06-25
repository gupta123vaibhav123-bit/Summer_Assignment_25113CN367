#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n],counteven=0,countodd=0;
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++){
        if(a[i]%2==0)
        counteven++;
        else
        countodd++;
    }
    printf("the no of even no in tha array are:%d\n",counteven);
    printf("the no of odd no in tha array are:%d",countodd);
    return 0;
}