#include<stdio.h>
int main()
{
    int num, check=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=2;i<=num;i++)
    {
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                check=1;
                break;
        }
    }
        if (check==0)
        {
            printf("%d ", i);
        }
        check=0;
    }
    return 0;
}
