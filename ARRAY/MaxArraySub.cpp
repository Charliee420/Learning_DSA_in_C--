#include <iostream>
using namespace std;

void MaxArraySub(int arr[], int n){
    int maxi=INT_MIN;
    for (int start=0; start<n ; start++){
        for (int end= start; end<n; end++){
            int sum=0;
            for(int i=start ; i<=end; i++){
               sum += arr[i]; 
            }
            maxi= max(maxi,sum);
        }
        
    }
    cout<<maxi<<endl;


}
void MaxArraySub2(int arr[], int n){
    int maxi=INT_MIN;
    for (int start=0; start<n ; start++){
        int sum=0;
        for (int end= start; end<n; end++){
            sum+= arr[end];
        }

        maxi= max(maxi,sum);
        
        
    }
    cout<<maxi<<endl;


}

int main (){
    int array[]={2,-3,6,-5,4,2};
    int n=sizeof(array)/sizeof(int);
    MaxArraySub(array,n);
    MaxArraySub2(array,n);

    return 0;
}