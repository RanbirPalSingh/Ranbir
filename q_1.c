#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit of the array:");
    scanf("%d",&n);
    int arr[n];
    int max=arr[0];
    int index;
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    printf("The maximum element is %d at index %d",max,index);
    return 0;
}