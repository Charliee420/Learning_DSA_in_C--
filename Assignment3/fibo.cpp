#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n number for fiboo";
    cin>>n;
    int first= 0;
    int second = 1;
    int third= 1;

    for (int i = 2; i<=n; i++){
        int third = first + second ;
        cout << third <<" ";
        first = second;
        second = third;
    }
    return 0 ;
}