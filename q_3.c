#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    int exist=0;
    printf("Enter the element you want to search:");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            exist=1;
        }
    }
    if(exist){
        printf("%d exists in the arrray",num);
    }
    else{
        printf("%d doesn't exists in the array",num);
    }
    return 0;
}