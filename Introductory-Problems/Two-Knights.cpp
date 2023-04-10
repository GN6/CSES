// https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;

bool attacking(int x1, int y1, int x2, int y2) {
    return (abs(x1 - x2) + abs(y1 - y2) == 3) ? true : false;
}

int main() {
    int k;
    scanf("%d", &k);

    for (int i = 1; i <= k; i++)
        printf("%lld\n", (long long) (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2));

    return 0;
}