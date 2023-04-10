// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long t1 = 0, t2 = 0;
    vector<int> l1(0), l2(0);
    for (int i = n; i > 0; i--) {
        if (t1 < t2) {
            l1.push_back(i);
            t1 += i;
        } else {
            l2.push_back(i);
            t2 += i;
        }
    }

    if (t1 != t2) printf("NO\n");
    else {
        printf("YES\n%ld\n%d", l1.size(), l1[0]);
        for (int i = 1; i < l1.size(); i++)
            printf(" %d", l1[i]);
        
        printf("\n%ld\n%d", l2.size(), l2[0]);
        for (int i = 1; i < l2.size(); i++)
            printf(" %d", l2[i]);
        printf("\n");
    }

    return 0;
}