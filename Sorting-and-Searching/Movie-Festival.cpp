// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;

struct movie {
    int start, end;
};

bool cmpr(movie m1, movie m2) {
    if (m1.end != m2.end) return m1.end < m2.end;
    return m1.start < m2.start;
}

int main() {
    int n;
    scanf("%d", &n);

    vector<movie> movies(n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &movies[i].start, &movies[i].end);
    sort(movies.begin(), movies.end(), cmpr);
    
    int counter = 0, endt = 0;
    for (int i = 0; i < n; i++) {
        if (movies[i].start < endt) continue;
        endt = movies[i].end;
        counter++;
    }
    printf("%d\n", counter);

    return 0;
}