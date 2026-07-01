#include<stdio.h>
#include<string.h>
int main(){
    char name[50][50];
    int id[50];
    float salary[50];
    char dept[50][50];
    int n,i,choice;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of employee %d\n",i+1);
        printf("Employee ID: ");
        scanf("%d",&id[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Department: ");
        scanf("%s",dept[i]);
        printf("Salary: ");
        scanf("%f",&salary[i]);
    }

    while(1){
        printf("\n--- EMPLOYEE MANAGEMENT SYSTEM ---\n");
        printf("1. Display all employees\n");
        printf("2. Search by ID\n");
        printf("3. Update salary\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nID\tName\tDept\tSalary\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%s\t%.2f\n",id[i],name[i],dept[i],salary[i]);
            }
        }
        else if(choice==2){
            int searchId,found=0;
            printf("Enter Employee ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if(id[i]==searchId){
                    printf("Found! Name=%s, Dept=%s, Salary=%.2f\n",name[i],dept[i],salary[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }
        }
        else if(choice==3){
            int updateId,found=0;
            float newSalary;
            printf("Enter Employee ID to update salary: ");
            scanf("%d",&updateId);
            for(i=0;i<n;i++){
                if(id[i]==updateId){
                    printf("Enter new salary: ");
                    scanf("%f",&newSalary);
                    salary[i]=newSalary;
                    printf("Salary updated successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }
        }
        else if(choice==4){
            printf("Exiting...");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}