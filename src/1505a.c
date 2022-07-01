#include <stdio.h>
#include <string.h>

signed main() {
    char s[sizeof("Is it rated?")];
    while (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\n")] = 0;
        puts("NO");
        fflush(stdout);
    }
}
