#include <iostream>

using namespace std;
namespace first {
    int x ;
}
namespace second {
    int x ;
}


int main() {
    using namespace first;
    using namespace second;
    cin >> first::x;
    cin >> second::x;
    cout << first::x + second::x << endl;
    cout << "Hello World!" << endl;
    return 0;
}