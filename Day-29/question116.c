#include<stdio.h>
#include<string.h>
int main(){
    char itemName[100][50];
    int itemId[100];
    int qty[100];
    float price[100];
    int n=0,choice,i;

    while(1){
        printf("\n--- INVENTORY MANAGEMENT SYSTEM ---\n");
        printf("1. Add item\n");
        printf("2. Display all items\n");
        printf("3. Search item by ID\n");
        printf("4. Update quantity\n");
        printf("5. Delete item\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Enter item ID: ");
            scanf("%d",&itemId[n]);
            printf("Enter item name: ");
            scanf("%s",itemName[n]);
            printf("Enter quantity: ");
            scanf("%d",&qty[n]);
            printf("Enter price: ");
            scanf("%f",&price[n]);
            n++;
            printf("Item added successfully!\n");
        }
        else if(choice==2){
            printf("\nID\tName\tQty\tPrice\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%d\t%.2f\n",itemId[i],itemName[i],qty[i],price[i]);
            }
        }
        else if(choice==3){
            int searchId,found=0;
            printf("Enter item ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if(itemId[i]==searchId){
                    printf("Found! Name=%s, Qty=%d, Price=%.2f\n",itemName[i],qty[i],price[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Item not found!\n");
            }
        }
        else if(choice==4){
            int updateId,found=0,newQty;
            printf("Enter item ID to update: ");
            scanf("%d",&updateId);
            for(i=0;i<n;i++){
                if(itemId[i]==updateId){
                    printf("Enter new quantity: ");
                    scanf("%d",&newQty);
                    qty[i]=newQty;
                    printf("Quantity updated successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Item not found!\n");
            }
        }
        else if(choice==5){
            int delId,found=0,j;
            printf("Enter item ID to delete: ");
            scanf("%d",&delId);
            for(i=0;i<n;i++){
                if(itemId[i]==delId){
                    found=1;
                    for(j=i;j<n-1;j++){
                        itemId[j]=itemId[j+1];
                        strcpy(itemName[j],itemName[j+1]);
                        qty[j]=qty[j+1];
                        price[j]=price[j+1];
                    }
                    n--;
                    printf("Item deleted successfully!\n");
                    break;
                }
            }
            if(found==0){
                printf("Item not found!\n");
            }
        }
        else if(choice==6){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}