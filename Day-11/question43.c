#include<stdio.h>
int prime(int);
int main(){
    int n,m,flag;
    printf("enter a no:");
    scanf("%d",&n);
    flag=prime(n);
    if(flag==0){
        printf("the no %d is prime ",n);
    }
    else{
        printf("the no %d is not prime",n);
    }
    return 0;
}
int prime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 1;
            break;
    }
    return 0;
}

}