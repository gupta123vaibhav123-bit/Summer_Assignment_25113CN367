#include<stdio.h>
#include<string.h>
int main(){
    char bookName[100][50],author[100][50];
    int bookId[100];
    char status[100][10];
    int n=0,choice,i;

    while(1){
        printf("\n--- MINI LIBRARY SYSTEM ---\n");
        printf("1. Add book\n");
        printf("2. Display all books\n");
        printf("3. Issue book\n");
        printf("4. Return book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Enter book ID: ");
            scanf("%d",&bookId[n]);
            printf("Enter book name: ");
            scanf("%s",bookName[n]);
            printf("Enter author: ");
            scanf("%s",author[n]);
            strcpy(status[n],"Available");
            n++;
            printf("Book added successfully!\n");
        }
        else if(choice==2){
            printf("\nID\tBook\tAuthor\tStatus\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%s\t%s\n",bookId[i],bookName[i],author[i],status[i]);
            }
        }
        else if(choice==3){
            int issueId,found=0;
            printf("Enter book ID to issue: ");
            scanf("%d",&issueId);
            for(i=0;i<n;i++){
                if(bookId[i]==issueId){
                    found=1;
                    if(strcmp(status[i],"Available")==0){
                        strcpy(status[i],"Issued");
                        printf("Book issued successfully!\n");
                    }else{
                        printf("Book already issued!\n");
                    }
                    break;
                }
            }
            if(found==0){
                printf("Book not found!\n");
            }
        }
        else if(choice==4){
            int returnId,found=0;
            printf("Enter book ID to return: ");
            scanf("%d",&returnId);
            for(i=0;i<n;i++){
                if(bookId[i]==returnId){
                    found=1;
                    if(strcmp(status[i],"Issued")==0){
                        strcpy(status[i],"Available");
                        printf("Book returned successfully!\n");
                    }else{
                        printf("Book was not issued!\n");
                    }
                    break;
                }
            }
            if(found==0){
                printf("Book not found!\n");
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