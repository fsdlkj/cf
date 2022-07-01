#include <math.h>
#include <stdio.h>

signed main() {
    unsigned long long n, m; double a;
    scanf("%llu %llu %lf", &n, &m, &a);
    printf("%1.f", ceil(n / a) * ceil(n / a));
}
