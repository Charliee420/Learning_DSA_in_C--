#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n;
    cin>>n;
    int fact=1;
    for (int i=1 ; i<=n
        ; i++ ){
        fact *=i;
        // if (n==0 && n==1){
        //     fact=1;
        // }else {
        //     fact *=i;
        // }
    }
     cout<<fact;
    
    return 0;
}