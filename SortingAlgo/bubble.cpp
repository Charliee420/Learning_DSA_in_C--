#include <iostream>
using namespace std;


void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void Bubble(int arr[], int n){
    for(int i=0; i<n; i++){
        bool IsSwap= false;
        cout<<"outer_loop  ";
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                IsSwap=true;
            }
            cout<<"inner_loop  ";
        }
        if(! IsSwap){
            cout<<"array is sorted";
            return;
        }

    }
    print(arr,n);
}

int main(){
    int array[5]={5,4,3,2,1};
    int aray2[6]={1,2,3,4,5,6};
    int m=6;
    int n=5;
    Bubble(aray2,m);
    return 0;
}