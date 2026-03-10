#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void watertrap(int arr[], int n ){
    int righmax[20000];
    int leftmax[20000];
    leftmax[0]=INT_MIN;
    righmax[n-1]=INT_MIN;
    for (int i=1; i<n; i++){
        leftmax[i]=max(arr[i-1],leftmax[i-1]);
        cout<<leftmax[i]<<",";
    }
    cout<<endl;
    for (int i =n-2; i>=0; i--){
        righmax[i]=max(arr[i+1], righmax[i+1]);
        cout<<righmax[i]<<",";
    }




}

int main(){
    int arr[]={4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(int);
    watertrap(arr,n);
    return 0;

}