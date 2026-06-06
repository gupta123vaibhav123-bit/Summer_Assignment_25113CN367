#include<stdio.h>
int main(){
    int n,a[10],i=0,j,s;
    printf("enter the no:");
    scanf("%d",&n);
    while(n){
        s=n%2;
        n=n/2;
        a[i]=s;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
    

}