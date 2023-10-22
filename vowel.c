#include<stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet:\n");
    scanf("%c",&ch);
    ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ? printf("vowel") : printf("consonant");
    return 0;
}

