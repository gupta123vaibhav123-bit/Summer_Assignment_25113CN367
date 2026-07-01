#include<stdio.h>
#include<string.h>
int main(){
    char name[50][50];
    int accNo[50];
    float balance[50];
    int n,i,choice;
    printf("Enter number of accounts: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter details of account %d\n",i+1);
        printf("Account Number: ");
        scanf("%d",&accNo[i]);
        printf("Name: ");
        scanf("%s",name[i]);
        printf("Initial Balance: ");
        scanf("%f",&balance[i]);
    }

    while(1){
        printf("\n--- BANK ACCOUNT SYSTEM ---\n");
        printf("1. Display all accounts\n");
        printf("2. Check balance\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("\nAccNo\tName\tBalance\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t%.2f\n",accNo[i],name[i],balance[i]);
            }
        }
        else if(choice==2){
            int searchAcc,found=0;
            printf("Enter Account Number: ");
            scanf("%d",&searchAcc);
            for(i=0;i<n;i++){
                if(accNo[i]==searchAcc){
                    printf("Balance = %.2f\n",balance[i]);
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("Account not found!\n");
            }
        }
        else if(choice==3){
            int depAcc,found=0;
            float amount;
            printf("Enter Account Number: ");
            scanf("%d",&depAcc);
            for(i=0;i<n;i++){
                if(accNo[i]==depAcc){
                    found=1;
                    printf("Enter amount to deposit: ");
                    scanf("%f",&amount);
                    balance[i]=balance[i]+amount;
                    printf("Deposit successful! New balance = %.2f\n",balance[i]);
                    break;
                }
            }
            if(found==0){
                printf("Account not found!\n");
            }
        }
        else if(choice==4){
            int witAcc,found=0;
            float amount;
            printf("Enter Account Number: ");
            scanf("%d",&witAcc);
            for(i=0;i<n;i++){
                if(accNo[i]==witAcc){
                    found=1;
                    printf("Enter amount to withdraw: ");
                    scanf("%f",&amount);
                    if(amount>balance[i]){
                        printf("Insufficient balance!\n");
                    }else{
                        balance[i]=balance[i]-amount;
                        printf("Withdrawal successful! New balance = %.2f\n",balance[i]);
                    }
                    break;
                }
            }
            if(found==0){
                printf("Account not found!\n");
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