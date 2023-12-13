#include<stdio.h>
void swap(int a,int b){//here a and b are formal arguments
int c;
c=a;
a=b;
b=c;
printf("value of a is %d and b is %d",a,b);

}
int main(){
    int a,b;//actual arguments
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("\nvalue of a and b after swap:\n");
    printf("a=%d,b=%d",a,b);
    return 0;
    }