#include <stdio.h>

signed main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int x;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
        }

        printf("%d\n", x);
    }
}
