// Your code here...
#include <stdio.h>
#include<ctype.h>
int main(){
    int x,i,y;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(y=x-1;y>0;y--){
            printf("*");
        }
        printf("\n");
    }
}