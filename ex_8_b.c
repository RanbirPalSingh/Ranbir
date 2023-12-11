#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int l=strlen(str);
    int same=1;
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=str[l-1-i]){
            same=0;
            break;
        }
    }
    if(same){
        printf("%s is a palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
    return 0;
}wsadwasdsawdasdasdwadswdwdwdsdqwerty nigga
