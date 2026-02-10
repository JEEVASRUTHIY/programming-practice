#include <stdio.h>

int main() {
    int n, temp, r, sum = 0;

    scanf("%d", &n);
    temp = n;   // store original number

    while (temp != 0) {
        r = temp % 10;

        int fact = 1;          // reset for each digit
        for (int i = 1; i <= r; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}
