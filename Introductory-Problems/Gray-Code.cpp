// https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;


string bin(int n, int len) {
    string binary = "";
    for (int i = len - 1; i >= 0; i--) binary += (n & (1 << i)) ? '1' : '0';
    return binary;
}


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < pow(2, n); i++) printf("%s\n", bin(i ^ (i >> 1), n).c_str());

    return 0;
}