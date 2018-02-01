#include <iostream>

// completed

using namespace std;

int main() {
    int counter = 0;
    int numSkip = 2;
    int countToFour = 0;
    unsigned long int answer = 1;

    for (int i = 3; i <= (1001 * 1001); i += numSkip) {
        answer += i;
        countToFour++;
        if (countToFour == 4) {
            countToFour = 0;
            numSkip += 2;
        }
    }

    cout << answer << endl;
}
