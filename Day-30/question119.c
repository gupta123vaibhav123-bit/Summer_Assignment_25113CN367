#include<stdio.h>
#include<string.h>
int main(){
    char name[100][50],dept[100][50];
    int empId[100];
    float salary[100];
    int n=0,choice,i;

    while(1){
        printf("\n--- MINI EMPLOYEE MANAGEMENT SYSTEM ---\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Search by ID\n");
        printf("4. Update salary\n");
        printf("5. Delete employee\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Enter employee ID: ");
            scanf("%d",&empId[n]);
            printf("Enter name: ");
            scanf("%s",name[n]);
            printf("Enter department: ");
            scanf("%s",dept[n]);
            printf("Enter salary: ");
            scanf("%f",&salary[n]);
            n++;
            printf("Employee added successfully!\n");
        }
        else if(choice==2){
            printf("\nID\tName\tDept\tSalary\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%s\t%.2f\n",empId[i],name[i],dept[i],salary[i]);
            }
        }
        else if(choice==3){
            int searchId,found=0;
            printf("Enter employee ID to search: ");
            scanf("%d",&searchId);
            for(i=0;i<n;i++){
                if(empId[i]==searchId){
                    printf("Found! Name=%s, Dept=%s, Salary=%.2f\n",name[i],dept[i],salary[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
            }
        }
        else if(choice==4){
            int updateId,found=0;
            float newSalary;
            printf("Enter employee ID to update: ");
            scanf("%d",&updateId);
            for(i=0;i<n;i++){
                if(empId[i]==updateId){
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
        else if(choice==5){
            int delId,found=0,j;
            printf("Enter employee ID to delete: ");
            scanf("%d",&delId);
            for(i=0;i<n;i++){
                if(empId[i]==delId){
                    found=1;
                    for(j=i;j<n-1;j++){
                        empId[j]=empId[j+1];
                        strcpy(name[j],name[j+1]);
                        strcpy(dept[j],dept[j+1]);
                        salary[j]=salary[j+1];
                    }
                    n--;
                    printf("Employee deleted successfully!\n");
                    break;
                }
            }
            if(found==0){
                printf("Employee not found!\n");
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