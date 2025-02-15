// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if ((x + y > z) && (y + z > x) && (z + x > y)){
        printf("Valid");
    }else{
        printf("Invalid");
    }

    return 0;
    }