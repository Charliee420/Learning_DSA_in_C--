#include <iostream>
using namespace std;

// WriteaC++programthattakesayearfromtheuserandprintwhetherthatyearisaleapyearornot

int main(){
    // int a;
    // cout<<"ENTER YEAR :"<<endl;
    // cin>>a;
    // if (a%400==0){
    //     cout<<"Its a leap yaer";

    // }else if(a%100==0) {
    //     cout <<"not leap year ";
    // }else if (a%4==0){
    //     cout<<"its a leap year";
    // }else {
    //     cout<<"its not a leap year ";
    // }


























    int year;
    cout<<"ENTER YEAR TO CHECK ITS LEAP YEAR OR NOT ";
    cin>>year;
    if (year % 400==0){
        cout<<"yes its a leap year ";

    }else if (year % 100==0){
        cout<<"yes this also a leap year ";

    }else if (year % 4 ==0){
        cout <<"yes its a leap year";
    }else {
        cout<<"no its not a leap year ";
    }

}