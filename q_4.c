#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the rows:");
    scanf("%d",&r);
    printf("Enter the columns:");
    scanf("%d",&c);
        int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the value for arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}