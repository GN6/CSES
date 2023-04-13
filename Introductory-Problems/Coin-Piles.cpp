// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf(((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) ? "YES\n" : "NO\n");
    }

    return 0;
}