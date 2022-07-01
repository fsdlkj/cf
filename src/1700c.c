#include <stdio.h>
#include <stdlib.h>

#define int long long

signed main() {
    int t;
    scanf("%lld", &t);

    while (t--) {
        int n, x;
        scanf("%lld", &n);
        int xs[n];
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &x);
            xs[i] = x;
        }

        int ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            int df = xs[i + 1] - xs[i];
            if (df < 0)
                xs[0] += df;
            ans += llabs(df);
        }

        printf("%lld\n", ans + llabs(xs[0]));
    }
}
