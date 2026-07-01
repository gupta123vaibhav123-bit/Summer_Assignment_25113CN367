#include <stdio.h>
int main()
{
    int i, j, rows, colums, a[100][100], b[100][100],flag=1;
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
    if (rows != colums)
    {
        printf("Not symm");
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < colums; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < colums; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    flag=0;

                }
            }
            
        }
    }
    if(flag==1){
        printf("Symm matrix");
    }
    else{
        printf("not a symm");
    }
    return 0;
}