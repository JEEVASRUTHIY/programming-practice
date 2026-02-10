#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, r, sum = 0, digits = 0;

    scanf("%d", &n);
    temp = n;

    // count digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    // calculate Armstrong sum
    while (temp != 0) {
        r = temp % 10;
        sum = sum + pow(r, digits);
        temp = temp / 10;
    }

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
