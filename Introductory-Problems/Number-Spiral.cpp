// https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        long long x, y;
        scanf("%lld %lld", &y, &x);

        if (x > y) {
            if (x % 2) printf("%lld\n", x * x - y + 1);
            else printf("%lld\n", (x - 1) * (x - 1) + y);
        } else {
            if (y % 2) printf("%lld\n", (y - 1) * (y - 1) + x);
            else printf("%lld\n", y * y - x + 1);
        }
    }

    return 0;
}