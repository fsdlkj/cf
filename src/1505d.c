#include <stdbool.h>
#include <stdio.h>

// https://codeforces.com/blog/entry/89260
signed main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int digits[14] = { 0 };
    bool dup = true;
    while (n) {
        int d = n % m;
        if (digits[d]) {
            dup = false;
            break;
        } else {
            digits[d] = true;
        }

        n /= m;
    }

    if (dup) {
        puts("YES");
    } else {
        puts("NO");
    }
}
