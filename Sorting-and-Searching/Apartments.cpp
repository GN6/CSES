// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int a[n], b[m];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    sort(a, a + n);
    sort(b, b + m);

    int counter = 0, ai = 0, bi = 0;
    while (ai < n && bi < m) {
        if (abs(a[ai] - b[bi]) <= k) {
            counter++;
            ai++;
            bi++;
        } else if (a[ai] < b[bi]) ai++;
        else bi++;
    }

    printf("%d\n", counter);

    return 0;
}