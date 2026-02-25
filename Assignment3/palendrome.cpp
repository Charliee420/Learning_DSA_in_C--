#include <iostream>
using namespace std;

int rev(int n){
    int num = 0;
    while (n > 0){
    int lastdigit = n % 10;
    num= num*10 + lastdigit;
    // cout << lastdigit ;
    n /= 10;
    }
    return num;
}

bool isPalndrome(int n){
    if (n==rev(n)) return true ;
    else return false ;
}

int main(){
    int n=454;
    // cout<<n<<endl;
    isPalndrome(n);
    return 0;
}