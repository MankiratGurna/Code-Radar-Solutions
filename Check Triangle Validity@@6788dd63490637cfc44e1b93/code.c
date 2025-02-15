// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if((0.5*x*y !=0) && (0.5*y*z !=0)){
        printf("Valid");
    }else{
        printf("Invalid");
    }

    return 0;