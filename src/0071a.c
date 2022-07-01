#include <stdio.h>
#include <string.h>

signed main() {
    int n;
    scanf("%d\n", &n);

    while (n--) {
        char s[128];
        fgets(s, 128, stdin);
        s[strcspn(s, "\n")] = 0;
        int len = strlen(s);

        if (len > 10) {
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            printf("%s\n", s);
        }
    }
}
