#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key ){
    int st=0;
    int end= n-1;
   
    while (st<=end){
        int mid = (st+end)/2;
        if (arr[mid]==key) {
            return mid;
        }else if (arr[mid]<key){
            st= mid + 1;
        }else {
            end= mid - 1;
        }
    }
    return -1;
   
}

int linearSearch(int arr[], int n, int key ){
    for (int i=0 ; i<n; i++){
        if (arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    int ans= BinarySearch(arr,n,key);
    if (ans!= -1) cout<<"found !!!!  : "<<ans;
    else cout<<"not found # # # "<<endl;
    return 0;
}