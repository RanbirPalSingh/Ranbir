#include<stdio.h>
int main(){
    int x;
    float r,s,l,b;
    printf("Enter x=1 for circle\n");
    printf("Enter x=2 for rectangle\n");
    printf("Enter x=3 for square\n");
    scanf("%d",&x);
    
    if(x==1){
        printf("Enter the value of radius :\n");
        scanf("%f",&r);
        printf("The area of circle is %.1f\n",3.14*r*r);
        printf("The perimeter of circle is %.1f",3.14*2*r);
    }
    else if(x==2){
        printf("Enter the values of length and breadth :\n");
        scanf("%f\n%f",&l,&b);
        printf("The area of rectangle is %.1f\n",l*b);
        printf("The perimeter of rectangle is %.1f",l+b+l+b);
    }
    else if (x==3){
        printf("Enter the value of side :\n");
        scanf("%f",&s);
        printf("The area of square is %.1f\n",s*s);
        printf("The perimeter of square is %.1f",s*4);
        
    }
    else{
        printf("ae vedia");
    }
    
return -0;
}
