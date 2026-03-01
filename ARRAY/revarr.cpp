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
    // int copy[n]
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << ",";
    //     copy[i]=arr[i];
    //     cout << copy[i] << ",";
    }
    cout<<endl;
}

// 2 pointer 
void arr_rev(int arr[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        int temp= arr[st];
        arr[st]= arr[end];
        arr[end]= temp;

        st++;
        end--;
        // cout <<arr[st]<<",";
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

//  inBuilt function 
void arr_revf(int arr[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    revarr(arr,n);
    revar(arr,n);
    arr_rev(arr,n);
    arr_revf(arr,n);
    return 0;
}
