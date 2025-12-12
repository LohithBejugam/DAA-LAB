#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float a[n];
    float b[n][n];
    int c[n];

    for (i = 0; i < n; i++) c[i] = 0;

    printf("Enter the elements (0 to 1): ");
    for (i = 0; i < n; i++) scanf("%f", &a[i]);

    printf("Before: ");
    for (i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");

    for (i = 0; i < n; i++) {
        int d = n * a[i];
        b[d][c[d]] = a[i];
        c[d]++;
    }

    for (i = 0; i < n; i++) {
        for (j = 1; j < c[i]; j++) {
            float t = b[i][j];
            int x = j - 1;
            while (x >= 0 && b[i][x] > t) {
                b[i][x + 1] = b[i][x];
                x--;
            }
            b[i][x + 1] = t;
        }
    }

    k = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < c[i]; j++)
            a[k++] = b[i][j];

    printf("After: ");
    for (i = 0; i < n; i++) printf("%.2f ", a[i]);
    printf("\n");

    return 0;
}

