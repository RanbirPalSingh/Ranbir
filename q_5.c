#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the rows and columns for matrix 1:\n");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];
    printf("Enter the rows and columns for matrix 2:\n");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    printf("Enter the elements of 1st matrix:\n");
    //first matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("The element at mat1[%d][%d] is",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    //second matrix
    printf("Enter the elements of 2nd matrix:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("The element at mat2[%d][%d] is",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    //multiplication:
    int result[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<r2;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The resultant matrix is:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}