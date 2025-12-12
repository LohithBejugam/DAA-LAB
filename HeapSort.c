#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Before: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    for (i = 1; i < n; i++) {
        int x = i;
        while (x > 0) {
            int p = (x - 1) / 2;
            if (a[p] < a[x]) {
                int t = a[p];
                a[p] = a[x];
                a[x] = t;
                x = p;
            } else break;
        }
    }

    for (i = n - 1; i > 0; i--) {
        int t = a[0];
        a[0] = a[i];
        a[i] = t;

        int x = 0;
        while (1) {
            int l = 2 * x + 1;
            int r = 2 * x + 2;
            int big = x;

            if (l < i && a[l] > a[big]) big = l;
            if (r < i && a[r] > a[big]) big = r;

            if (big == x) break;

            t = a[x];
            a[x] = a[big];
            a[big] = t;

            x = big;
        }
    }

    printf("After: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}

