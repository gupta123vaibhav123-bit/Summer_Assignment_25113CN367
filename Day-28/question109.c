#include<stdio.h>
#include<string.h>
int main(){
    char title[50][50],author[50][50];
    int bookId[50];
    int qty[50];
    int issued[50];
    int n,i,choice;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of book %d\n",i+1);
        printf("Book ID: ");
        scanf("%d",&bookId[i]);
        printf("Title: ");
        scanf("%s",title[i]);
        printf("Author: ");
        scanf("%s",author[i]);
        printf("Quantity: ");
        scanf("%d",&qty[i]);
        issued[i]=0;
    }

    while(1){
        printf("\n--- LIBRARY MANAGEMENT SYSTEM ---\n");
        printf("1. Display all books\n");
        printf("2. Search book by ID\n");
        printf("3. Issue a book\n");
        printf("4. Return a book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nID\tTitle\tAuthor\tQty\tIssued\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%s\t%d\t%d\n",bookId[i],title[i],author[i],qty[i],issued[i]);
            }
        }
        else if(choice==2){
            int searchId,found=0;
            printf("Enter Book ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if(bookId[i]==searchId){
                    printf("Found! Title=%s, Author=%s, Qty=%d, Issued=%d\n",title[i],author[i],qty[i],issued[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Book not found!\n");
            }
        }
        else if(choice==3){
            int issueId,found=0;
            printf("Enter Book ID to issue: ");
            scanf("%d",&issueId);
            for(i=0;i<n;i++){
                if(bookId[i]==issueId){
                    found=1;
                    if(qty[i]>issued[i]){
                        issued[i]++;
                        printf("Book issued successfully!\n");
                    }else{
                        printf("No copies available!\n");
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
            printf("Enter Book ID to return: ");
            scanf("%d",&returnId);
            for(i=0;i<n;i++){
                if(bookId[i]==returnId){
                    found=1;
                    if(issued[i]>0){
                        issued[i]--;
                        printf("Book returned successfully!\n");
                    }else{
                        printf("No book was issued with this ID!\n");
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