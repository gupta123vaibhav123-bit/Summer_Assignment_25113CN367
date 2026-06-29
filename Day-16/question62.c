#include<stdio.h>
int main(){
    int i,j,n,a[100],count,maxcount=0,maxelement;
    printf("enter the no");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
            if(maxcount<count){
                maxcount=count;
                maxelement=a[i];
            }
          }
    }
    printf("Max frequency element: %d\n", maxelement);
    printf("Its frequency: %d\n", maxcount);

    return 0;

}