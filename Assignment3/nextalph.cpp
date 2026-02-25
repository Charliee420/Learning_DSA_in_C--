#include <iostream>
using namespace std;

void nextch(char a){
     
    a++;
    cout<<a<<endl;
}

int main(){
   char ch='Z';
   if(ch=='Z') cout<<"A";
    nextch(ch);
    return 0;
}