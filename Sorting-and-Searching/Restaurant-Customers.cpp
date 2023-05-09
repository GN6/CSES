// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
using namespace std;

struct times {
    int t;
    bool type;
};

bool cmpr(times t1, times t2) {
    return t1.t < t2.t;
}

int main() {
    int n;
    scanf("%d", &n);

    vector<times> data(n * 2);
    for (int i = 0; i < n; i++) {
        data[i * 2].type = false;
        scanf("%d", &data[i * 2].t);

        data[i * 2 + 1].type = true;
        scanf("%d", &data[i * 2 + 1].t);
    }
    sort(data.begin(), data.end(), cmpr);

    int counter = 0, highest = 0;
    for (times i : data) {
        counter += i.type ? -1 : 1;
        highest = max(highest, counter);
    }

    printf("%d\n", highest);

    return 0;
}