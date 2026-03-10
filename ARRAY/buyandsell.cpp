#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int maxprofit(int arr[], int n ){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
    for (int i=1; i<n; i++){
        bestbuy[i]= min(bestbuy[i-1], arr[i-1]);
    }

    int maxprofit=0;
    for (int i=0; i<n; i++){
        int currentprofit=arr[i]-bestbuy[i];
        maxprofit= max(maxprofit, currentprofit);
    }
    return maxprofit;
}

int main(){
    int price[]={7,1,5,3,6,4};
    int n= sizeof(price)/sizeof(int);
   cout<< maxprofit(price,n);
    return 0;
}