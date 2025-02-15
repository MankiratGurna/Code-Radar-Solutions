// Your code here...
#include <stdio.h>
#include<ctype.h>
int main(){
    int x,i,y;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(y=0;y<=x-i;y++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}