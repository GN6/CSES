// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;

int main() {
    int counter[26];
    fill(counter, counter + 26, 0);

    char letter;
    while (scanf("%c", &letter) != -1)
        counter[letter - 'A']++;

    bool valid = true;
    char pivot = '-';
    string firsthalf = "", lasthalf = "";
    for(int i = 0; i < 26; i++) {
        if (counter[i] % 2) {
            if (pivot == '-') pivot = 'A' + i;
            else valid = false;
        }

        for (int j = 0; j < counter[i] / 2; j++)
            firsthalf += 'A' + i;
    }
    
    for (int i = firsthalf.length() - 1; i >= 0; i--)
        lasthalf += firsthalf[i];

    if (!valid) printf("NO SOLUTION\n");
    else if (pivot == '-') printf("%s%s\n", firsthalf.c_str(), lasthalf.c_str());
    else printf("%s%c%s\n", firsthalf.c_str(), pivot, lasthalf.c_str());

    return 0;
}