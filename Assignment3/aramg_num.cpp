#include <iostream>
using namespace std;

int main (){
    // int take_num;
    // cout<<"enter any 3 digit number to check its aramstrong number or not "<<endl;
    // cin >>take_num;
    // int dupnum=take_num;
    // int dig1=dupnum % 10;
    // dupnum /=10;
    // int dig2=dupnum % 10;
    // dupnum /=10;
    // int dig3=dupnum;

    // int sum_of_cube=((dig1*dig1*dig1)+(dig2*dig2*dig2)+(dig3*dig3*dig3));
    // if (sum_of_cube==take_num){
    //     cout <<"Its a aramngstrng number ";

    // }else {
    //     cout <<"its not ";
    // }




































    int a;
    cout<<"ENTER ANY THREE DIGIT NUMBER TO CHECK IS ITS ARAMSTRONG NUMBER OR NOT "<<endl;
    cin>>a;
    int dupblicated=a;
    int digit1=dupblicated % 10;
    dupblicated /=10;
    int digit2=dupblicated % 10;
    dupblicated /=10;
    int digit3 = dupblicated;
    int sum_cube=(digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
    if (sum_cube==a){
        cout<<"yes its a aramgstrong number";

    }else {
        cout<<"no its not a aramngstrong number";
    }

}