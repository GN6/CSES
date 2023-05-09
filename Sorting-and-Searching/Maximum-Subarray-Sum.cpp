// https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    bool greaterZero = false;
    int high = -1e9;
    long long maximum = 0, current = 0;
    for (int i = 0; i < n; i++) {
        int xi;
        scanf("%d", &xi);
        if (xi >= 0) greaterZero = true;
        if (high < xi) high = xi;

        current += xi;

        if (current > maximum) maximum = current;
        else if (current < 0) current = 0;
    }

    if (greaterZero) printf("%lld\n", maximum);
    else {
        printf("%d\n", high);
    }

    return 0;
}