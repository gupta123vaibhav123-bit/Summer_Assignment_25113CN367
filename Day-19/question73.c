#include<stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],i,j,rows,columns;
    printf("Enter the no of rows = ");
    scanf("%d",&rows);
    printf("Enter the no of columns = ");
    scanf("%d",&columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("For second matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;


}