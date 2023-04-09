#include <bits/stdc++.h>
using namespace std;

int main() {
    string data;
    cin >> data;

    int longest = 1, curlen = 1;
    char curchar = data[0];
    for (int i = 1; i < data.length(); i++) {
        if (data[i] != curchar) curlen = 1, curchar = data[i];
        else longest = max(longest, ++curlen);
    }
    printf("%d\n", longest);

    return 0;
}