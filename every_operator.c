#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the 1st number\n");
    scanf("%d",&num1);
    printf("Enter the 2nt number\n");
    scanf("%d",&num2);

    printf("sum of %d and %d is %d\n",num1,num2,num1+num2);
    printf("difference between %d and %d is %d\n",num1,num2,num1-num2);
    printf("remainder of %d/%d is %d\n",num1,num2,num1%num2);
    printf("multiplication of %d and %d is %d",num1,num2,num1*num2);
    return 0;
}