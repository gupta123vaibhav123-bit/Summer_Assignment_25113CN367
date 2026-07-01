#include<stdio.h>
int main(){
    int i,j,rows1,colums1,rows2,colums2,a[100][100],b[100][100],c[100][100],k;
    printf("enter  the  colums of first matrix= ");
    scanf("%d",&colums1);
    printf("enter  the  rows of first matrix= ");
    scanf("%d",&rows1);
    printf("enter  the  colums of 2nd matrix= ");
    scanf("%d",&colums2);
    printf("enter  the  rows of 2nd matrix= ");
    scanf("%d",&rows2);
    for(i=0;i<rows1;i++){
        for(j=0;j<colums1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("For second matrix\n");
    for(i=0;i<rows2;i++){
        for(j=0;j<colums2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows1;i++){
        for(j=0;j<colums2;j++){
            c[i][j]=0;
            for(k=0;k<colums1;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<rows1;i++){
        for(j=0;j<colums2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}