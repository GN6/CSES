// https://cses.fi/problemset/task/1090
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int counter = 0;
    vector<int> p(0);
    for (int i = 0; i < n; i++) {
        int pi;
        scanf("%d", &pi);
        if (pi == x) counter++;
        else p.push_back(pi);
    }

    sort(p.begin(), p.end());
    int bottom = 0, top = p.size() - 1;
    while (bottom <= top) {
        if (p[bottom] + p[top] <= x || bottom == top) {
            counter++;
            bottom++;
            top--;
        } else {
            counter++;
            top--;
        }
    }

    printf("%d\n", counter);

    return 0;
}