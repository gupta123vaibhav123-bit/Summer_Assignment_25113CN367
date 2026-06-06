#include<stdio.h>
#include<math.h>
int main(){
    int binary,f,p=1,i=0,s=0;
    printf("enter the binary no:");
    scanf("%d",&binary);
    while(binary!=0){
        f=binary%10;
        p=f*pow(2,i);
        s=s+p;
        binary=binary/10;
        i++;
    }
    printf("the decimal no :%d",s);
    return 0;
}