#include <iostream>
using namespace std;

// using extra space 
void revarr(int arr[], int n){
    // n=sizeof(arr)/sizeof(int);
    int copy[n];
    for (int i=0; i<n; i++){
        int j=n-i-1;
        copy[i]=arr[j];
        cout<<copy[i]<<",";
    }
    cout<<endl;
}



//  not using extra spaces 
void revar(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << ",";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    revarr(arr,n);
    revar(arr,n);

    return 0;
}
