#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int c;
                c=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=c;
            }
        }
    }
    printf("The sortes array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;}