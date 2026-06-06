#include<stdio.h>
int main(){
    int i,n;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("the factors of %d is=%d\n",n,i);

        }
    }
    return 0;
}