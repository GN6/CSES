// https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main() {
    int n, out = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        out = (out * 2) % mod;
    
    printf("%d\n", out);

    return 0;
}