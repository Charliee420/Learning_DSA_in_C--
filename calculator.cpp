#include <iostream>

using namespace std;


int sum(){
    int x,y;
    cout >> "Enter first number :" 
    cin >> x;
    cout >> "Enter second number :" 
    cin >> y;
    return x+y
}

int minus(){
     int x,y;
    cout >> "Enter first number :" 
    cin >> x;
    cout >> "Enter second number :" 
    cin >> y;
    return x-y

}

int mult(){
     int x,y;
    cout << "Enter first number :" 
    cin >> x;
    cout << "Enter second number :" 
    cin >> y;
    return x*y
}
float divid(){
     int x,y;
    cout >> "Enter first number :" ;
    cin >> x;
    cout >> "Enter second number :" ;
    cin >> y;
    if (y != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Operator is not correct";
            break;
    return 0;
}

int main() {
    // char op;
    // double num1, num2;
    int op;

    cout << "Enter operator 1:ADD \n 2:SUB \n 3:Mult \n 4:Divid \n ";
    cin >> op;

    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;

    switch(op) {
        case (1):
            // cout << num1 << " + " << num2 << " = " << num1 + num2;
            sum()
            break;
        case (2):
            minus()
        // cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case (3):
            // cout << num1 << " * " << num2 << " = " << num1 * num2;
            mult()
            break
        case (4):
            divid()
    }

    cout << endl;
    return 0;
}
