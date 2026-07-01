#include <stdio.h>
int main()
{
    int i, j, rows, colums, a[100][100], b[100][100], lsum = 0, rsum = 0;
    printf("enter the no of rows = ");
    scanf("%d", &rows);
    printf("enter the no of colums = ");
    scanf("%d", &colums);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < colums; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (rows == colums)
    {
        for (i = 0; i < colums; i++)
        {
                lsum=lsum+a[i][i];
        }
        for (i = 0; i < colums; i++)
        {
                rsum=rsum+a[i][rows-i-1];
        }

    }
    printf("The sum of left diagnol = %d\n",lsum);
    printf("The sum of right diagnol=%d",rsum);
    return 0;
}