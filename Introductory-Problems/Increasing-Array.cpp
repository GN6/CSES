// https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long x[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &x[i]);
    
    long long moves = 0, needed = x[0];
    for (int i = 1; i < n; i++)
        moves += max((long long) 0, needed - x[i]), needed = max(needed, x[i]);
    printf("%lld\n", moves);

    return 0;
}