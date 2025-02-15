// Your code here...
#include <stdio.h>

#include<math.h>
int main(){
    int x,i,j,k;
    int z=2**i;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=x-i+1;j++){
            printf(" ");
        }
        for(k=1;k<=z-1;k++){
            printf("* ");
        }printf("\n");
    }
}