#include <stdio.h>
#include <string.h>

signed main() {
    char s[10];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int len = strlen(s);

    for (int i = 2; i < len; i++) {
        int c = (s[i - 1] + s[i - 2]) % 26 + 'A';
        if (c != s[i]) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}
