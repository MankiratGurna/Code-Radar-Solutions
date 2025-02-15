// Your code here...
#include <stdio.h>
#include <ctype.h>

int main(){
    char x;
    scanf("%c",&x);
    if (isalpha(x)){
        char ch=tolower(x);
        if((ch=='a') ||(ch==)'e' || (ch=='i') || (ch=='o') || (ch=='u')){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if(isdigit(x)){
        printf("Digit");
    }else{
        printf("Special character");
    }
    return 0;
}