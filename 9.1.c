#include<stdio.h>
float add(float a,float b){
    printf("The sum of 2 numbers are %.2f",a+b);
}
float sub(float a,float b){
    printf("The difference between two numbers are %.2f",a-b);
}
float mul(float a,float b){
    printf("The multiplication of two numbers are %.2f",a*b);
}
float div(float a,float b){
    if(b==0){
        printf("ERROR");
    }else{
    printf("The division of two numbers are %.2f",a/b);}
}
int main(){
    char op;
    float num1,num2;
    printf("Enter + for addition:\n");
    printf("Enter - for subtraaction:\n");
    printf("Enter * for multiplication:\n");
    printf("Enter / for division:\n");
    scanf("%c",&op);
    printf("Enter the two numbers:\n");
    scanf("%f %f",&num1,&num2);

    switch(op){
        case('+'):{
            add(num1,num2);
            break;
        }
        case('-'):{
            sub(num1,num2);
            break;
        }
        case('*'):{
            mul(num1,num2);
            break;
        }
        case('/'):{
            div(num1,num2);
            break;
        }
    }
    return 0;
}