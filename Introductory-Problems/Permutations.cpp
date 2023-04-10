// https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) printf("1");
    else if (n < 4) printf("NO SOLUTION");
    else {
        printf("2");
        for (int i = 4; i <= n; i += 2)
            printf(" %d", i);
        for (int i = 1; i <= n; i += 2)
            printf(" %d", i);
    }
    printf("\n");

    return 0;
}