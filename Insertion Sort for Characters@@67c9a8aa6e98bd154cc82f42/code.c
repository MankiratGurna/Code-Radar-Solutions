#include<stdio.h>
void insertionSort(char arr[],int n);
void printArray(char arr[], int n);
int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);    
    }
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
void insertionSort(char arr[],int n){
    char temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap characters
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
