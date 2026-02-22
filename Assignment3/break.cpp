#include <iostream>
using namespace std;
int main(){
    int n;
    do {
        cout<<"Enter you number ";
        cin>>n;
        if (n % 10 == 0) {
            cout<<"You entred multiple of 10 ";
            break;
        }
        // else if (n==char){cout<<"entred char";}
        cout<<"entred "<<n<<" number"<<endl;
    }while(true);
    return 0 ;
}