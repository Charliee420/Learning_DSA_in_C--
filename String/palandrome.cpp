// #include <iostream>
// #include <cstring>
// using namespace std;

// void pal(char str[],int n){
//     int st=0, end=n-1;
//     // for (int i=0; i/)
//     while (st<=end){
//         if(str[st++] == str[end--]) return ture ;
//     }
//     cout<<"not paldrome"<<endl;

// }



// int main() {
//     char str[] = "Heloooo_Yooooo";

//     cout<<pal(str, strlen(str));

   

//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

bool pal(char str[], int n) {
    int st = 0, end = n - 1;

    while (st <= end) {
        if (str[st] != str[end]) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    char str[] = "RACECAR";

    if (pal(str, strlen(str))) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}