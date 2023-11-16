#include<stdio.h>
#include<math.h>
int main(){
    int p,r,result,i;
    for(i=1;i<=100;i++){
        int j=i;
        p=0;
        result=0;
        while(j!=0){
            j=j/10;
            p+=1;
        }
        j=i;
        while(j!=0){
            r=j%10;
            result=result+pow(r,p);
            j=j/10;
 }
 j=i;
    if(j==result){
    printf("%d ",result);
}

}
return 0;

}