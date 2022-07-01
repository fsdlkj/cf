#include <stdio.h>

signed main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, res = 0;
        scanf("%d %d", &n, &m);
        int a[n];

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);

            if (m >= a[i]) {
                m -= a[i];
            } else {
                res += a[i] - m, m = 0;
            }
        }

        printf("%d\n", res);
    }
}
