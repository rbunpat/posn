#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int input;
    long long int i, j;
    long long int total = 0;
    cin >> input;

    for (i = input; i > 0; i--) {
        for (j = i; j > 0; j--) {
            total += j;
        }
    }

    cout << total;


    return 0;
}