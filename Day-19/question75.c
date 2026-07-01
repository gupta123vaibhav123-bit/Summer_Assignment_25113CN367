#include<stdio.h>
int main(){
    int i,j,rows,colums,a[100][100],b[100][100];
    printf("enter the no of rows = ");
    scanf("%d",&rows);
    printf("enter the no of colums = ");
    scanf("%d",&colums);
    for(i=0;i<rows;i++){
        for(j=0;j<colums;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<colums;i++){
        for(j=0;j<rows;j++){
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<colums;i++){
        for(j=0;j<rows;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}