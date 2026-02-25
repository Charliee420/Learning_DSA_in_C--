#include <iostream>
using namespace std;

void largest(int v,int n,int m){
if (n>v && n>m) cout<<"n is largesst than v and m ";
else if (v>n && v>m) cout<< "v is largeest";
else if (m>v && m>n) cout <<"m is largest ";

}

int main(){
    int n= 10, v=15 , m=30;
    largest(v,n,m);
    return 0;
}