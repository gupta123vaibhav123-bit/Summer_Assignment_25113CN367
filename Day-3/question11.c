#include<stdio.h>
int main()
{
    int num1,num2, check=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int cpy1=num1, cpy2=num2, rem;
    while(rem>0)
    {
     rem=cpy1%cpy2;
        cpy1=cpy2;
        cpy2=rem;
    }
    if (cpy2==0)
    {
        printf("The GCD of %d and %d is: %d", num1, num2, cpy1);
    }
    return 0;
}