#include<stdio.h>
#include<string.h>
int main(){
    char name[50][50];
    int roll[50];
    float sub1[50],sub2[50],sub3[50],sub4[50],sub5[50];
    float total[50],percentage[50];
    char grade[50];
    int n,i,choice;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of student %d\n",i+1);
        printf("Roll number: ");
        scanf("%d",&roll[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Enter marks of 5 subjects: ");
        scanf("%f %f %f %f %f",&sub1[i],&sub2[i],&sub3[i],&sub4[i],&sub5[i]);

        total[i]=sub1[i]+sub2[i]+sub3[i]+sub4[i]+sub5[i];
        percentage[i]=total[i]/5;
    }

    while(1){
        printf("\n--- MARKSHEET GENERATION SYSTEM ---\n");
        printf("1. Generate marksheet for all\n");
        printf("2. Search by roll number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            for(i=0;i<n;i++){
                printf("\n----- MARKSHEET -----\n");
                printf("Roll No: %d\n",roll[i]);
                printf("Name: %s\n",name[i]);
                printf("Sub1=%.1f  Sub2=%.1f  Sub3=%.1f  Sub4=%.1f  Sub5=%.1f\n",sub1[i],sub2[i],sub3[i],sub4[i],sub5[i]);
                printf("Total = %.1f\n",total[i]);
                printf("Percentage = %.2f%%\n",percentage[i]);

                if(percentage[i]>=90){
                    printf("Grade = A+\n");
                }else if(percentage[i]>=75){
                    printf("Grade = A\n");
                }else if(percentage[i]>=60){
                    printf("Grade = B\n");
                }else if(percentage[i]>=40){
                    printf("Grade = C\n");
                }else{
                    printf("Grade = Fail\n");
                }
            }
        }
        else if(choice==2){
            int searchRoll,found=0;
            printf("Enter roll number to search: ");
            scanf("%d",&searchRoll);
            for(i=0;i<n;i++){
                if(roll[i]==searchRoll){
                    printf("\n----- MARKSHEET -----\n");
                    printf("Roll No: %d\n",roll[i]);
                    printf("Name: %s\n",name[i]);
                    printf("Sub1=%.1f  Sub2=%.1f  Sub3=%.1f  Sub4=%.1f  Sub5=%.1f\n",sub1[i],sub2[i],sub3[i],sub4[i],sub5[i]);
                    printf("Total = %.1f\n",total[i]);
                    printf("Percentage = %.2f%%\n",percentage[i]);
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