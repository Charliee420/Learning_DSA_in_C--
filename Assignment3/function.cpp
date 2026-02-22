#include <iostream>
using namespace std;


int factriol(int n){
int fact = 1;
for (int i=1; i<=n; i++){
    fact *=i;
}
return fact;
}

int main(){
    int n;

    // cout<<"r
    cin>>n;
    cout<<factriol(n);
    return 0;
}