// Your code here...
#include <stdio.h>

#include<math.h>
int main(){
    int x,i,j,k;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        int  z= (int)pow(2,i);
        for(j=1;j<=x-i+1;j++){
            printf(" ");
        }
        for(k=1;k<=z-1;k++){
            printf("* ");
        }printf("\n");
    }
}