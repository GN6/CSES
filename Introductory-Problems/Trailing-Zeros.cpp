// https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long total = 0;
    for (int div = 5; div < 1e9; div *= 5)
        total += n / div;

    printf("%lld\n", total);

    return 0;
}