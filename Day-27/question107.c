#include<stdio.h>
#include<string.h>
int main(){
    char name[50][50];
    int id[50];
    float basic[50],hra[50],da[50],deduction[50],netSalary[50];
    int n,i,choice;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of employee %d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&id[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Basic Salary: ");
        scanf("%f",&basic[i]);
        printf("HRA: ");
        scanf("%f",&hra[i]);
        printf("DA: ");
        scanf("%f",&da[i]);
        printf("Deduction: ");
        scanf("%f",&deduction[i]);

        netSalary[i]=basic[i]+hra[i]+da[i]-deduction[i];
    }

    while(1){
        printf("\n--- SALARY MANAGEMENT SYSTEM ---\n");
        printf("1. Display all salary slips\n");
        printf("2. Search by ID\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            for(i=0;i<n;i++){
                printf("\nID=%d, Name=%s\n",id[i],name[i]);
                printf("Basic=%.2f, HRA=%.2f, DA=%.2f, Deduction=%.2f\n",basic[i],hra[i],da[i],deduction[i]);
                printf("Net Salary = %.2f\n",netSalary[i]);
            }
        }
        else if(choice==2){
            int searchId,found=0;
            printf("Enter Employee ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if(id[i]==searchId){
                    printf("\nID=%d, Name=%s\n",id[i],name[i]);
                    printf("Basic=%.2f, HRA=%.2f, DA=%.2f, Deduction=%.2f\n",basic[i],hra[i],da[i],deduction[i]);
                    printf("Net Salary = %.2f\n",netSalary[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
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