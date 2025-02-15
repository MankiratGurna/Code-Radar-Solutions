// Your code here...
#include <stdio.h>
int main(){
    int x,i,j,k;
    scanf("%d",&x);
    for(i=1;1<=x;i++){
        for(j=1;j<=x;j++){
            if(i==1 || i==x || j==1 || j==x){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}