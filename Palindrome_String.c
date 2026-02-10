#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len, flag = 1;

    scanf("%s", s);          // read string (no spaces)
    len = strlen(s);

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
