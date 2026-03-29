#include <iostream>
using namespace std;

void search(int mat[][4], int n, int key){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == key){
                cout << "Element found at index: (" << i << "," << j << ")" << endl;
                return;
            }
        }
    }

    cout << "Element not found" << endl;
}

int main(){

    int array[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    search(array,4,14);

    return 0;
}