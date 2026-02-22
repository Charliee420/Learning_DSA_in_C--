#include <iostream>
using namespace std ;

// Write a C++ program to get a number from the user and print whether it's positive , negative or zero.
int main(){
  int a;
  cout<<"Enter any number : "<<"\n";
  cin>>a;
  if (a<0){cout<<"number is negitive"<<"\n";}
  else if (a==0){cout<<"number is zero"<<"\n";}
  else {cout<<"number is positive "<<endl;};
 return 0;
}