#include <stdio.h>

int sum(int n) {
    return n * (n + 1) / 2;
}

signed main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        printf("%lld\n", m * sum(n) + sum(m) - m);
    }
}
