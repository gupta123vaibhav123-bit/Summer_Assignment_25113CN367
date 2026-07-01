#include<stdio.h>
int main(){
    int a[100],n,choice,i,j,temp,sum=0,max,min,key,count;

    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    while(1){
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Display array\n");
        printf("2. Sum of elements\n");
        printf("3. Find maximum\n");
        printf("4. Find minimum\n");
        printf("5. Sort array\n");
        printf("6. Search element\n");
        printf("7. Reverse array\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Array: ");
            for(i=0;i<n;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        else if(choice==2){
            sum=0;
            for(i=0;i<n;i++){
                sum=sum+a[i];
            }
            printf("Sum = %d\n",sum);
        }
        else if(choice==3){
            max=a[0];
            for(i=1;i<n;i++){
                if(a[i]>max){
                    max=a[i];
                }
            }
            printf("Maximum = %d\n",max);
        }
        else if(choice==4){
            min=a[0];
            for(i=1;i<n;i++){
                if(a[i]<min){
                    min=a[i];
                }
            }
            printf("Minimum = %d\n",min);
        }
        else if(choice==5){
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            printf("Array sorted successfully!\n");
        }
        else if(choice==6){
            printf("Enter element to search: ");
            scanf("%d",&key);
            count=0;
            for(i=0;i<n;i++){
                if(a[i]==key){
                    printf("Element found at index %d\n",i);
                    count=1;
                    break;
                }
            }
            if(count==0){
                printf("Element not found!\n");
            }
        }
        else if(choice==7){
            for(i=0;i<n/2;i++){
                temp=a[i];
                a[i]=a[n-1-i];
                a[n-1-i]=temp;
            }
            printf("Array reversed successfully!\n");
        }
        else if(choice==8){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}