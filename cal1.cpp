#include <iostream>
using namespace std;

int sum(int num1,int num2){
    int re=num1+num2;
    cout<< re;
    return 0;
}

int min(int num1, int num2){
    int re= num1-num2;
    cout<< re;
    return 0;
}
int mult(int num1,int num2){

    int re= num1*num2;
    cout<< re;
    return 0;
}

float divid(int num1, int num2){
    if (num2 != 0){
        cout <<num1/num2;

    }else{
        cout<< "Invalid divident ";
    }
    return 0;
}

int main(){
    int num1;
    int num2;
    cout<< "Enter 1st number :\n";
    cin>> num1;
    cout << "Enter 2nd number :\n";
    cin>> num2;
    int sel;
    cout<< "Enter the oreation you want :1:ADD\n2:SUB\n3:MULTIPLY\n4:DIVID\n5: Exit"<<endl;
    cin>> sel;
    do{
    // while(sel!=5)
    switch(sel) {
        case 1:
            sum(num1,num2);
            break;
        case 2:
            min(num1,num2);
            break;
        case 3:
            mult(num1, num2);
            break;
        case 4:
            divid(num1,num2);
            break;
        // case 5:
        //     exit;
        default :
            cout<<"Exited";
    }}while(sel!=5);
    return 0;
    // switch 
}