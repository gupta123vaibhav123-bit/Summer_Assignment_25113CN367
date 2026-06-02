#include<stdio.h>
int main()
{
    int i,n,table;
    printf("Enter the number:");
    scanf("%d",&n);
        for(i=1;i<=10;i++)
        {
            table=n*i;
            printf("\n %d*%d=%d",n,i,table);
        }
    return 0;
    }