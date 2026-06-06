#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,s,f,digits,i;
    printf("enter the no:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        digits=0;  
        s=0;       
        temp=i;
        
        while(temp>0){
            digits++;
            temp=temp/10;
        }
        temp=i;
        while(temp>0){
            f=temp%10;
            s=s+(int)pow(f,digits);
            temp=temp/10;
        }
        
        if(i==s)  
            printf("%d is armstrong\n",i);
    }
    return 0;
}