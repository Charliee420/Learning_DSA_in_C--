#include <iostream>
using namespace std;

void Ab(int a, int b){
    int result= (a*a) + (b*b) + (2*a*b);
    cout<< result;
}

int main (){
    int a ,b;
    cin>>a;
    cin>>b;
    Ab(a,b);
    return 0;
}