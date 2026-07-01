#include<stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],i,j,rows,columns,sum=0;
    printf("Enter the no of rows = ");
    scanf("%d",&rows);
    printf("Enter the no of columns = ");
    scanf("%d",&columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        sum=0;
        for(j=0;j<columns;j++){
            sum=sum+a[j][i];
        }
        printf("the sum of column %d is = %d\n",i,sum);
    }
   
    
    return 0;


}