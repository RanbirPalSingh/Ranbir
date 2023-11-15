#include<stdio.h>
#include<math.h>
int main(){
    int num,n,result=0,p=0,r;
    printf("Enter the number:");
    scanf("%d",&num);
    int num1=num;
    while(num1!=0){
        num1=num1/10;
        p+=1;
    }
    num1=num;
    while(num1!=0){
        r=num1%10;
        result=result+pow(r,p);
        num1=num1/10;
    }
    
    if(result==num){
        printf("%d is an armstrom number",num);
    }
    else {printf("%d is not an armsrom number",num);}
    return 0;
}
    
    
    