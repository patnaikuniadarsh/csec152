#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merge[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merge[k++] = arr1[i++];
        } else {
            merge[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merge[k++] = arr1[i++];
    }

    while (j < n2) {
        merge[k++] = arr2[j++];
    }

    int n = n1 + n2;

    if (n % 2 == 0) {
        double median = (merge[n / 2 - 1] + merge[n / 2]) / 2.0;
        printf("%.1f\n", median);
    } else {
        printf("%d\n", merge[n / 2]);
    }

    return 0;
}