#include<iostream>
using namespace std;
int main(){
    int num=1235;
    int sum=0;
    // while(num>0){
    //     int digit=num%10;
    //     // if(digit % 2 !=0){ if only ODD numbers 
    //     //     sum +=digit;
    //     // }
    //     sum +=digit;
    //     num /=10;
    //     // sum +=digit;
    // }
    // cout<<sum;


    // revrse the number 

    while (num > 0){
    int lastdigit = num % 10;
    cout << lastdigit ;
    num /= 10;}
    return 0;
}