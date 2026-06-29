#include<stdio.h>
int main(){
    int i,j,n,a[100],sum=0;
    printf("enter the no");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the sum:");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("Pair found: %d + %d = %d\n",a[i],a[j],sum);
            }


        }
    }
    return 0;

}