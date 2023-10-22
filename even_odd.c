//Program to weather a number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num:\n");
    scanf("%d",&num);
    (num%2==0) ? printf("%d is a even number",num) : printf("%d is a odd number",num);
    return 0;
}