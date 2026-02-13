#include <iostream>
using namespace std;
int main(){
    int x=15;
    int* ptr= &x;
    *ptr = *ptr+1;
    cout<<x;
}
