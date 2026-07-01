#include<stdio.h>
#include<string.h>
int main(){
    char name[100][50],phone[100][15],email[100][50];
    int n=0,choice,i;

    while(1){
        printf("\n--- CONTACT MANAGEMENT SYSTEM ---\n");
        printf("1. Add contact\n");
        printf("2. Display all contacts\n");
        printf("3. Search contact by name\n");
        printf("4. Delete contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Enter name: ");
            scanf("%s",name[n]);
            printf("Enter phone number: ");
            scanf("%s",phone[n]);
            printf("Enter email: ");
            scanf("%s",email[n]);
            n++;
            printf("Contact added successfully!\n");
        }
        else if(choice==2){
            printf("\nName\tPhone\tEmail\n");
            for(i=0;i<n;i++){
                printf("%s\t%s\t%s\n",name[i],phone[i],email[i]);
            }
        }
        else if(choice==3){
            char searchName[50];
            int found=0;
            printf("Enter name to search: ");
            scanf("%s",searchName);
            for(i=0;i<n;i++){
                if(strcmp(name[i],searchName)==0){
                    printf("Found! Phone=%s, Email=%s\n",phone[i],email[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Contact not found!\n");
            }
        }
        else if(choice==4){
            char delName[50];
            int found=0,j;
            printf("Enter name to delete: ");
            scanf("%s",delName);
            for(i=0;i<n;i++){
                if(strcmp(name[i],delName)==0){
                    found=1;
                    for(j=i;j<n-1;j++){
                        strcpy(name[j],name[j+1]);
                        strcpy(phone[j],phone[j+1]);
                        strcpy(email[j],email[j+1]);
                    }
                    n--;
                    printf("Contact deleted successfully!\n");
                    break;
                }
            }
            if(found==0){
                printf("Contact not found!\n");
            }
        }
        else if(choice==5){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}