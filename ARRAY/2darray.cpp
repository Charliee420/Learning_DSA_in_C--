#include <iostream>

using namespace std; 
// O(n^2)
int Diogunal_sum(int mat[][3],int n){
    int sum=0;
    for (int i=0; i<n; i++){
        for (int j=0;j<n; j++){
            if(i==j){
                sum +=mat[i][j];

            }else if (j==n-i-1){
                sum += mat[i][j];

            }
        }
    }
    return sum;
}





// O(n)



int Di_sum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += mat[i][i];
        if (i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    return sum;
}
int main(){
    int array [4][4]={{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
 int array2 [3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};

// cout<<Diogunal_sum(array,4);
cout<<Diogunal_sum(array2,3)<<"\n";
cout<<Di_sum(array,4)<<endl;


return 0;

}