// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char x;
    scanf("%c", &x);
    char u = toupper(x);
    
    if (!isalpha(x)) {
        printf("Not an alphabet");
    } else if (x == u) {
        printf("Uppercase");
    } else {
        printf("Lowercase");
    }

    return 0;
}