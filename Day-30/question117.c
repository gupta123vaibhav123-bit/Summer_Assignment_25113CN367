#include<stdio.h>
#include<string.h>
int main(){
    char name[100][50];
    int roll[100];
    float marks[100][5];
    float total[100],percentage[100];
    int n,i,j,choice;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Roll number: ");
        scanf("%d",&roll[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Enter marks of 5 subjects: ");
        total[i]=0;
        for(j=0;j<5;j++){
            scanf("%f",&marks[i][j]);
            total[i]=total[i]+marks[i][j];
        }
        percentage[i]=total[i]/5;
    }

    while(1){
        printf("\n--- STUDENT RECORD SYSTEM ---\n");
        printf("1. Display all students\n");
        printf("2. Search by roll number\n");
        printf("3. Sort by percentage\n");
        printf("4. Find topper\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            for(i=0;i<n;i++){
                printf("\nRoll=%d, Name=%s\n",roll[i],name[i]);
                printf("Marks: ");
                for(j=0;j<5;j++){
                    printf("%.1f ",marks[i][j]);
                }
                printf("\nTotal=%.1f, Percentage=%.2f%%\n",total[i],percentage[i]);
            }
        }
        else if(choice==2){
            int searchRoll,found=0;
            printf("Enter roll number to search: ");
            scanf("%d",&searchRoll);
            for(i=0;i<n;i++){
                if(roll[i]==searchRoll){
                    printf("Found! Name=%s, Total=%.1f, Percentage=%.2f%%\n",name[i],total[i],percentage[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Student not found!\n");
            }
        }
        else if(choice==3){
            char tempName[50];
            int tempRoll;
            float tempPer,tempTotal,tempMarks[5];
            for(i=0;i<n-1;i++){
                for(j=0;j<n-1-i;j++){
                    if(percentage[j]<percentage[j+1]){
                        tempPer=percentage[j];
                        percentage[j]=percentage[j+1];
                        percentage[j+1]=tempPer;

                        tempRoll=roll[j];
                        roll[j]=roll[j+1];
                        roll[j+1]=tempRoll;

                        strcpy(tempName,name[j]);
                        strcpy(name[j],name[j+1]);
                        strcpy(name[j+1],tempName);

                        tempTotal=total[j];
                        total[j]=total[j+1];
                        total[j+1]=tempTotal;
                    }
                }
            }
            printf("Sorted by percentage (descending) successfully!\n");
        }
        else if(choice==4){
            int topperIndex=0;
            for(i=1;i<n;i++){
                if(percentage[i]>percentage[topperIndex]){
                    topperIndex=i;
                }
            }
            printf("Topper = %s with %.2f%%\n",name[topperIndex],percentage[topperIndex]);
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