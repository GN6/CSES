// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;

int n, p[20];
long long total = 0;

long long solve(int i, long long cur) {
    if (i == n) return abs(total - cur - cur);
    return min(solve(i + 1, cur + p[i]), solve(i + 1, cur));
}


int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        total += p[i];
    }

    printf("%lld\n", solve(0, 0));

    return 0;
}