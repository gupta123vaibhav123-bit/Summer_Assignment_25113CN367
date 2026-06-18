#include<stdio.h>
int maximum(int,int,int);
int main(){
    int a,b,c,max;
    printf("enter three no:");
    scanf("%d%d%d",&a,&b,&c);
    max=maximum(a,b,c);
    printf("the maximum  no b/w these  %d %d %d is:%d",a,b,c,max);
    return 0;
}
int maximum(int x,int y,int z){
    if(x>y&&x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}