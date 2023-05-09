// https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>
using namespace std;

struct number {
    int num, index;
};

bool cmpr(number n1, number n2) {
    return n1.num < n2.num;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    vector<number> data(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i].num);
        data[i].index = i;
    }
    sort(data.begin(), data.end(), cmpr);

    int ptr1 = 0, ptr2 = n - 1;
    while (ptr1 < ptr2) {
        if (data[ptr1].num + data[ptr2].num == x) break;
        if (data[ptr1].num + data[ptr2].num < x) ptr1++;
        else ptr2--;
    }

    if (ptr1 == ptr2) printf("IMPOSSIBLE\n");
    else printf("%d %d\n", data[ptr1].index + 1, data[ptr2].index + 1);

    return 0;
}