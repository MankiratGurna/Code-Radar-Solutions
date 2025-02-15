// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    return 0;