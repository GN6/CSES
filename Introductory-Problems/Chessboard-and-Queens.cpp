// https://cses.fi/problemset/task/1624
#include <bits/stdc++.h>
using namespace std;

int cant_queen[8][8], counter = 0;
void queen(int q) {
    if (q == 8) {
        counter++;
        return;
    }

    for (int i = 0; i < 8; i++) {
        if (cant_queen[q][i]) continue;

        for (int j = 1; j + q < 8; j++) {
            cant_queen[q + j][i]++;
            if (i - j >= 0) cant_queen[q + j][i - j]++;
            if (i + j < 8) cant_queen[q + j][i + j]++;
        }

        queen(q + 1);

        for (int j = 1; j + q < 8; j++) {
            cant_queen[q + j][i]--;
            if (i - j >= 0) cant_queen[q + j][i - j]--;
            if (i + j < 8) cant_queen[q + j][i + j]--;
        }
    }
}


int main() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char x;
            scanf("%c", &x);
            cant_queen[i][j] = (x == '*') ? 1 : 0;
        }
        scanf("\n");
    }

    queen(0);
    printf("%d\n", counter);

    return 0;
}