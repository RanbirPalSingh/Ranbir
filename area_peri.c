#include<stdio.h>
int main(){
    float radius,side,length,breath;
    printf("Enter the value of radius\n");
    scanf("%f",&radius);
    printf("Enter the value of side\n");
    scanf("%f",&side);
    printf("Enter the value of length\n");
    scanf("%f",&length);
    printf("Enter the value of breath\n");
    scanf("%f",&breath);

    printf("The area of circle is %.2f\n",3.14*radius*radius);
    printf("The perimeter of circle is %.2f\n",3.14*radius*2);
    printf("The area of square is %.2f\n",side*side);
    printf("The perimeter of square is %.2f\n",4*side);
    printf("The area of rectangle is %.2f\n",length*breath);
    printf("The perimeter of rectangle is %.2f\n",2*(length+breath));
    return 0;



}