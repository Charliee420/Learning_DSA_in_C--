#include <iostream >
using namespace std ;
/*butterfly pattren 


*      * R1
**    ** R2
***  *** R3
******** R4
******** R5
***  *** R6
**    ** R7
*      * R8





*/


// firt half coding 
int main (){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        
        for (int j=1; j<=i; j++){
            cout<<"*";

        }
        for (int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=n; i>=1; i--){
        
        for (int j=1; j<=i; j++){
            cout<<"*";

        }
        for (int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
 
return 0;

}