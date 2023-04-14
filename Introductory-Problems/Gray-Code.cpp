// https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;


string bin(int n, int len) {
    string binary = "";
    for (int i = len - 1; i >= 0; i--) binary += (n & (1 << i)) ? '1' : '0';
    return binary;
}


vector<int> grey_code(int n) {
    if (n == 1) return {0, 1};

    int pow2n = pow(2, n);
    vector<int> data(pow2n), halfdata = grey_code(n - 1);
    for (int i = 0; i * 2 < pow2n; i++)
        data[i] = halfdata[i], data[pow2n - 1 - i] = halfdata[i] | 1 << (n - 1);

    return data;
}


int main() {
    int n;
    scanf("%d", &n);
    vector<int> data = grey_code(n);
    for (int i = 0; i < pow(2, n); i++) printf("%s\n", bin(data[i], n).c_str());

    return 0;
}