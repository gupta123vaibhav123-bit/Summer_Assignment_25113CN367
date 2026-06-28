#include<stdio.h>
int main(){
    int i,a[100],n,largest,smallest,secondlargest;
    printf("Enter the no of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(smallest>a[i]){
            smallest=a[i];
        }
    }
    secondlargest=a[0];
    for(i=1;i<n;i++){
        if(a[i]>secondlargest && a[i]<largest){
            secondlargest=a[i];
        }

    }
    printf("the  largest element = %d\n",largest);
    printf("the second largest element = %d",secondlargest);
    return 0;
}