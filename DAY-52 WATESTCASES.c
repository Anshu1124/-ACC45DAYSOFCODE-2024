#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int s[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &s[i]);
        }
        char v[n+1];
        scanf("%s", v);
        int ans = 101;
        for (int i = 0; i < n; i++) {
            if (v[i] == '0') {
                if (s[i] < ans) {
                    ans = s[i];
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
