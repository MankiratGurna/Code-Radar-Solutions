// Your code here...
#include<stdio.h>
#include <ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    char u = toupper(x);
    if(x== u){
        printf("Uppercase");
    }
    else if(x!=char){
        printf("Not an alphabet")
    }else{
        printf("Lowercase");
    }
}