#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is NOT a Prime number";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a Prime number";
    else
        cout << n << " is NOT a Prime number";

    return 0;
}
