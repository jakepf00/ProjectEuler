#include<bits/stdc++.h>

using namespace std;

int main() {
    int x = 999, y = 999, ans = 0;
    for (x; y >=100 && x >= 100; y--) {
        int z = x * y;
        string a = to_string(z);
        string b = a;
        reverse(a.begin(), a.end());
        if (a == b) {
            if (z > ans) ans = z;
        }
        if (y == 100) {
            x--;
            y = 999;
        }
    }
    cout << ans << endl;
}
