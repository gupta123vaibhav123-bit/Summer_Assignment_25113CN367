#include<stdio.h>
#include<math.h>
int main(){
    int n,power,i,j,p=1;
    printf("the no whose power is to be caluculated:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        p=p*n;
    }
    printf("the %dth power  of %d  is=%d",i,n,p);  
    return 0;
}