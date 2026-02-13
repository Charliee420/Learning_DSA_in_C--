#include <iostream>
using namespace std;

int main(){
    int a= 5;
    int b;
    
    b= a++; //post increment
    cout<<a<<endl;
    cout<<b<<endl;

    b= ++a; //pre increment
    cout<<a<<endl;
    cout<<b<<endl;

    b= a--; //post decrement
    cout<<a<<endl;
    cout<<b<<endl;

    b= --a; //pre decrement
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}