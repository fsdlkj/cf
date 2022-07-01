#include <stdio.h>

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

signed main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a[4];
        int ans = 0;
        for (size_t i = 0; i < ARRAY_SIZE(a); ++i) {
            scanf("%d", &a[i]);
            ans += a[i];
        }

        if (ans == 0) {
            puts("0");
        } else if (ans == 4) {
            puts("2");
        } else {
            puts("1");
        }
    }
}
