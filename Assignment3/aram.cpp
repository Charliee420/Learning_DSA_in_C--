#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter number ";
    cin>>n;
    int num=n;
    int cubeSum=0;
    // for (int i = 0)
    while (num > 0){
        int lastDig = num % 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /=10;
    }
    if (cubeSum==n){
        cout<<cubeSum<<"  its aramg strong number";
    }else {
        cout<<"not aramg strong number ";
    }
    return 0;

}