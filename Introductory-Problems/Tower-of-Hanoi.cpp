// https://cses.fi/problemset/task/2165/
#include <bits/stdc++.h>
using namespace std;


bool swap(vector<int>* v1, vector<int>* v2) {
    if (v1->size() == 0) {
        v1->push_back(v2->back());
        v2->pop_back();
        return false;
    }

    if (v2->size() == 0) {
        v2->push_back(v1->back());
        v1->pop_back();
        return true;
    }

    if (v1->back() < v2->back()) {
        v2->push_back(v1->back());
        v1->pop_back();
        return true;
    }

    v1->push_back(v2->back());
    v2->pop_back();
    return false;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int) pow(2, n) - 1);
    
    vector<int> s1(n), s2(0), s3(0);
    for (int i = 0; i < n; i++) s1[i] = n - i;

    int step = 2;
    while (s3.size() != n) {
        if (n % 2) step++;
        else step--;
        step = (step + 3) % 3;

        switch (step) {
        case 0:
            printf(swap(&s1, &s3) ? "1 3\n" : "3 1\n");
            break;

        case 1:
            printf(swap(&s1, &s2) ? "1 2\n" : "2 1\n");
            break;

        case 2:
            printf(swap(&s2, &s3) ? "2 3\n" : "3 2\n");
            break;
        }
    }

    return 0;
}