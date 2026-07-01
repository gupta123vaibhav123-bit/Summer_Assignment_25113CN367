#include<stdio.h>
int main(){
    int pin,enteredPin;
    float balance=5000,amount;
    int choice;

    pin=1234;

    printf("Enter your PIN: ");
    scanf("%d",&enteredPin);

    if(enteredPin!=pin){
        printf("Incorrect PIN!");
        return 0;
    }

    while(1){
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Your balance = %.2f\n",balance);
        }
        else if(choice==2){
            printf("Enter amount to deposit: ");
            scanf("%f",&amount);
            balance=balance+amount;
            printf("Deposit successful! New balance = %.2f\n",balance);
        }
        else if(choice==3){
            printf("Enter amount to withdraw: ");
            scanf("%f",&amount);
            if(amount>balance){
                printf("Insufficient balance!\n");
            }else{
                balance=balance-amount;
                printf("Withdrawal successful! New balance = %.2f\n",balance);
            }
        }
        else if(choice==4){
            printf("Thank you for using ATM!");
            break;
        }
        else{
            printf("Invalid choice!\n");
        }
    }

    return 0;
}