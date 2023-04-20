// https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>
using namespace std;

int n;
string str;
set<string> combos;

void solve(int bitmask, string cur) {
    if (bitmask == pow(2, n) - 1) {
        combos.insert(cur);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!((1 << i) & bitmask)) solve(bitmask | 1 << i, cur + str.substr(i, 1));
    }
}


int main() {
    cin >> str;
    n = str.length();
    for (int i = 0; i < n; i++) solve(1 << i, str.substr(i, 1));

    printf("%lu\n", combos.size());

    vector<string> sorted(combos.begin(), combos.end());
    sort(sorted.begin(), sorted.end());
    for (string i: sorted) printf("%s\n", i.c_str());


    return 0;
}