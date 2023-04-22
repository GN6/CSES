// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    set<int> x;
    while (n--) {
        int xi;
        scanf("%d", &xi);
        x.insert(xi);
    }
    printf("%lu\n", x.size());

    return 0;
}