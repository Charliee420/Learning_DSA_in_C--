#include<iostream>
using namespace std;


int Bignum(int a, int b){
    
    if (a>b) return a;
    else return b;
}
int main (){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"biggest number "<<Bignum(a,b);
    return 0;
}