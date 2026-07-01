#include<stdio.h>
#include<string.h>
int main(){
    char name[50][50];
    int roll[50];
    float marks[50];
    int n,i,choice;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Roll number: ");
        scanf("%d",&roll[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Marks: ");
        scanf("%f",&marks[i]);
    }

    while(1){
        printf("\n--- STUDENT RECORD SYSTEM ---\n");
        printf("1. Display all records\n");
        printf("2. Search by roll number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nRoll\tName\tMarks\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%.2f\n",roll[i],name[i],marks[i]);
            }
        }
        else if(choice==2){
            int searchRoll,found=0;
            printf("Enter roll number to search: ");
            scanf("%d",&searchRoll);
            for(i=0;i<n;i++){
                if(roll[i]==searchRoll){
                    printf("Found! Name=%s, Marks=%.2f\n",name[i],marks[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Student not found!\n");
            }
        }
        else if(choice==3){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}