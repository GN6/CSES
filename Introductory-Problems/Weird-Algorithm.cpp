// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", n);
    while (n != 1) {
        if (n % 2) n = n * 3 + 1;
        else n /= 2;
        printf(" %lld", n);
    }
    printf("\n");
    return 0;
}