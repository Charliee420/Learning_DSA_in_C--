// #include <iostream>
// #include <cstring>
// using namespace std;



// void strrev(char word[],int n){
//     int st=0 , end=n-1;
//     // for (int i = 0; i<=n; i++ )
//     while (st<=end){
//         swap(word[st],word[end]);
//         st++;
//         end--;
//     }
// }
// int main(){

//     char str[]="Heloooo_Yooooo";
//     cout<<strrev(str,strlen(str));

//     return 0;

// }











#include <iostream>
#include <cstring>
using namespace std;

void strrev(char word[], int n) {
    int st = 0, end = n - 1;

    while (st <= end) {
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

int main() {
    char str[] = "Heloooo_Yooooo";

    strrev(str, strlen(str));

    cout << str;

    return 0;
}