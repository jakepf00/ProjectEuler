#include<bits/stdc++.h>
using namespace std;

int main() {
	int primeNum = 1;
	for (int i = 3; primeNum < 10001; i += 2) {
		bool isPrime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primeNum++;
			cout << primeNum << ": " << i << endl;
		}
	}
}
