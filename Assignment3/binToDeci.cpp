#include <iostream>
using namespace std;

void BinToDec(int bin){
    int num=bin;
    int deci = 0;
    int power = 1;


    while (num>0){
        int lasdig=num%10;
        deci += lasdig * power;
        num /=10;
        power *= 2;
    }
    cout<<deci<<endl;
}

void decitobin(int deci){
    int num = deci;
    int bin = 0;
    int power = 1;

    while(num > 0){
        int rem = num %2;
        bin += rem*power;
        num /=2;
        power*=10;
    }
    cout<<bin<<endl;


}
int main(){
    BinToDec(01);
    decitobin(37);
    return 0;
}