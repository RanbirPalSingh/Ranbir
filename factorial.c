#include<stdio.h>
int main()
{   int num,result=1;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        result=result*i;
    }
    printf("%d",result);
    return 0;
    
}