#include<stdio.h>
int main(){
    int m,i,a[100],n,found=0;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the element to be searched:");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==m){
            printf("The element %d found at the index %d successfully",a[i],i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("the element is not found");
    }
    return 0;

}