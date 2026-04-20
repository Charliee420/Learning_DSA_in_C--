#include <iostream>
using namespace std;

int main(){
    char word[50];
    // cin>>word;
    cin.getline(word,30,'.');

    cout<<word;

}