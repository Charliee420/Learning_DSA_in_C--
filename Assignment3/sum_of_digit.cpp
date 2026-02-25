#include<iostream>
using namespace std;



void sum_of_digit(int n){
    int sum=0;
    while (n > 0){
    int lastdigit = n % 10;
    // cout << lastdigit ;
    n /= 10;
    sum += lastdigit;

}
   cout<<sum; // return 0;
}
int main(){
    int num;
    cin>>num;
    sum_of_digit(num);
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
return 0;
  
}