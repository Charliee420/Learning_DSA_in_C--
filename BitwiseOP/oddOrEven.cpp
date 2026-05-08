#include <iostream>
using namespace std;


void OddOrEven(int num){
    if(!(num&1)){
        cout<< "Even" ;
    }
    else {
        cout<< "Odd" ;
    }

}
int main(){
    OddOrEven(10);
    return 0;
}