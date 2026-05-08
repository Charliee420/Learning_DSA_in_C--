#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;

    // 1. Non-parameterized (Default) Constructor
    Car() {
        cout << "Constructor 1: No arguments passed.\n";
        name = "Unknown";
        color = "Unknown";
    }

    // 2. Parameterized Constructor (only name)
    Car(string n) {
        cout << "Constructor 2: Only name passed.\n";
        name = n;
        color = "Black"; // Default color
    }

    // 3. Parameterized Constructor (name and color)
    Car(string n, string c) {
        cout << "Constructor 3: Name and color passed.\n";
        name = n;
        color = c;
    }

    // Get Function 
    string GetName(){
        return name;
    } 
    string GetColor(){
        return color;
    }
};

int main() {
    Car c1;                   // Calls Constructor 1
    Car c2("Tesla");          // Calls Constructor 2
    Car c3("Ferrari", "Red"); // Calls Constructor 3

    cout<<c1.GetName()<<endl;
    cout<<c2.GetName()<<endl;
    cout<<c3.GetName()<<endl;
    cout<<c3.GetColor()<<endl;


    return 0;
}