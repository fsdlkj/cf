#include <stdio.h>

signed main() {
    int weight;
    scanf("%d", &weight);
    weight % 2 == 0  && weight > 2 ? puts("YES") : puts("NO");
}
