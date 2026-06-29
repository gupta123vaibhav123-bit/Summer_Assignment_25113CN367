#include<stdio.h>
int main(){
    int n,i,j,low=0,mid,a[100],search;
    printf("the no of elements:");
    scanf("%d",&n);
    int high=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be find:");
    scanf("%d",&search);
    mid=(low+high)/2;
    while(low<=high){
        if(a[mid]<search){
            low=mid+1;
           
    }
        if(a[mid]>search){
            low=mid-1;
           
    }
        if(a[mid]==search){
            printf("The element %d found at the index = %d",search,mid);
            break;
        }
        mid=(low+high)/2;
}
    return 0;
}