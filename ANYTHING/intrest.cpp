#include <iostream>
using namespace std;

int main() {
    float p, r, t;

    cout << "Its a simple interest calculator :: " << endl;

    cout << "Enter the Principal Amount: ";
    cin >> p;

    cout << "Enter the rate of interest: ";
    cin >> r;

    cout << "Enter the time: ";
    cin >> t;

    cout << "SI = " << (p * r * t) / 100 << endl;

    return 0;
}
