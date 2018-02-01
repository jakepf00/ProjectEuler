#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 2;
    int previous = 1;
    unsigned long int ans = 0;
    while (i < 4000000) {
        if (i % 2 == 0) {
            ans += i;
        }
        int temp = i;
        i += previous;
        previous = temp;
    }
    cout << ans << endl;
}
