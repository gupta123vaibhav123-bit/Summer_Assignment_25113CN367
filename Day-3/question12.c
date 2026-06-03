#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    int num1=a, num2=b, rem;
    while(rem>0)
    {
     rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    int gcd=num1;
    int lcm=(a*b)/gcd;
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}