#include <iostream>
using namespace std;

// void hello (){

// }

int main(){
    int n ;
    cout<<"length"<<endl;
    cin>>n;
    cout<<"elements in arr"<<n<<endl;

    int arr[n];
    for (int i=0 ; i<n; i++){
        cin>>arr[i];
    }
int max=arr[0];
int min=arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max "<<max<<endl;
    cout<<"min "<<min<<endl;
    return 0;
}