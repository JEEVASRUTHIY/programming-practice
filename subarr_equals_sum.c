#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int count = 0, sum = 0;

    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == target) {
                count++;
                for(int k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }

    if(count > 1) {
        printf("Good");
    } else {
        printf("Bad");
    }

    return 0;
}
