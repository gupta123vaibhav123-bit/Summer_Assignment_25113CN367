#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;

        }
    }
    if(s==n){
        printf("it is a perfect no");
    }
    else{
        printf("not a perfect no");
    }
    return 0;
}