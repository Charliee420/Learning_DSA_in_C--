#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n ){
    if (n==1) return false ;
    for (int i = 2; i<= sqrt(n); i++){
        if(n % i == 0 ) return false ;
    }
    return true ;

}

void allPrime(int n){
    for (int i=1 ; i<=n ; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
    cout<<" ";
    // return 0;
}

int main(){
    int n;
    cin>>n;
    allPrime(n);
    return 0;
}
