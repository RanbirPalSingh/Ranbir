//Call by reference
#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("The value of a and b is %d and %d",*a,*b);
}
int main(){
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nValue of a and b after swap:\n");
    printf("a=%d,b=%d",a,b);
    return 0;
}
