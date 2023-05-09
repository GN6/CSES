// https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    multiset<int> h;
    for (int i = 0; i < n; i++) {
        int hi;
        scanf("%d", &hi);
        h.insert(hi);
    }
    
    for (int i = 0; i < m; i++) {
        int ti;
        scanf("%d", &ti);

        multiset<int>::iterator hiter = h.upper_bound(ti);
        if (hiter == h.begin()) printf("-1\n");
        else {
            hiter--;
            printf("%d\n", *hiter);
            h.erase(hiter);
        }
    }

    return 0;
}