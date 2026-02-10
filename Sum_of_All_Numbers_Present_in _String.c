#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);

    int sum = 0, res = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');
        } else {
            sum += res;
            res = 0;
        }
    }

    sum += res;  

    printf("%d", sum);
    return 0;
}
