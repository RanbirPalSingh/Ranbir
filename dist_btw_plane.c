#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    printf("Enter the value of x1:\n");
    scanf("%d",&x1);
    printf("Enter the value of y1:\n");
    scanf("%d",&y1);
    printf("Enter the value of x2:\n");
    scanf("%d",&x2);
    printf("Enter the value of y2:\n");
    scanf("%d",&y2);

    printf("%.2f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    return 0;
    }