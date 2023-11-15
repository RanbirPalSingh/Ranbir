#include<stdio.h>
int main(){
    int num,isprime=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int i=2;
    while(i<num){
        if(num%i==0 ){
            isprime=0;
            
        }
        i++;
    }
    if(isprime){
        printf("%d ia a prime number",num);
    }
    else{printf("%d is not a prime number",num);}
    return 0;
}