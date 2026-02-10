#include <stdio.h>

int main() {
    int n, rev = 0, num;

    scanf("%d", &n);

    num = n;   // store original number

    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    if (n == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
