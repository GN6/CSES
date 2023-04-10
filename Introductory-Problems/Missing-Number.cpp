// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    bool found[n];
    fill(found, found + n, false);
    for (int i = 1; i < n; i++) {
        int j;
        scanf("%d", &j);
        found[j - 1] = true;
    }
    for (int i = 0; i < n; i++)
        if (!found[i]) printf("%d\n", i + 1);

    return 0;
}