#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

signed main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (snprintf(NULL, 0, "%lld", n) == 2) {
            printf("%lld\n", n % 10);
        } else {
            int min = 9;
            while (n) {
                min = MIN(n % 10, min);
                n /= 10;
            }
            printf("%d\n", min);
        }
    }
}
