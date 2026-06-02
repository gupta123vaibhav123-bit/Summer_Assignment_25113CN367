#include<stdio.h>
int main()
{
    int n, r, sum = 0, a;
    printf("Enter an integer: ");
    scanf("%d", &n);   
    a=n;
    while (a!= 0)
    {
        r = a % 10;
        sum = sum * 10 + r;
        a /= 10;
    }
    if (sum == n)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    return 0;
}
