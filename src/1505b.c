#include <ctype.h>
#include <stdio.h>

signed main() {
    int d, res = 0;
    while (isdigit(d = getchar())) {
        if ((res += d - '0') > 9)
            res -= 9;
    }
    printf("%d\n", res);
}
