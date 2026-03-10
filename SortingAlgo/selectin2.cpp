#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_ind = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }

        swap(arr[i], arr[min_ind]);
    }
}

int main(){
    int array[5] = {5,4,3,2,1};
    int aray2[6] = {1,2,3,4,5,6};

    int n = 5;
    int m = 6;

    Selection_sort(array, n);
    Selection_sort(aray2, m);

    print(array, n);
    print(aray2, m);

    return 0;
}