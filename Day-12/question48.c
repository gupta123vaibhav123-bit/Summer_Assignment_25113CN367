#include<stdio.h>
int perfect(int);
int main(){
    int n,c;
    printf("ente the no:");
    scanf("%d",&n);
    c=perfect(n);
    if(c==n){
        printf("%d is a perfect no",n);
    }
    else{
        printf("%d is not a perfect no",n);
    }
}
int perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;

}