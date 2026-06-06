#include<stdio.h>
int main()
{
    int num,a=0,b=1,c;
    printf("Enter a number until which you want to get the fibonacci series:");
    scanf("%d",&num);
for (int i=2;i<=num;i++)
    {
        if(i<=1)
        {
            c=i;
        }
        else
        {
        c=a+b;
        a=b;
        b=c;
        }
      printf("\n%d",c);
    }
printf("\n");
    return 0;
}