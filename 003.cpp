#include<bits/stdc++.h>

using namespace std;

int main() {
    long long number = 600851475143;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            number /= i;
            i = 2;
        }
    }
    cout << number << endl;
}
