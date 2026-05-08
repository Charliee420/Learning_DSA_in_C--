#include <iostream>
using namespace std;

class Animal {
public: 
    void eat(){
        cout << " this animal eats \n ";

    }
    void animal(){
        cout << " this is animal class \n ";

    }
};

class Bird : public Animal {
public : 
    void fly(){
        cout << " this amimal bird can flay \n ";

    }
    void egg(){
        cout << " this bird lays eggs \n ";
    }

};


class Dog : public Animal 
{
public:
    string breeed;

    void breed(string breeed ){
        this -> breeed = breeed;
    }
    string GetBreed(){
        return breeed;

    }

};






int main (){
    // Object Making 
    Dog d1;
    Bird b1;


    // using inherited properties 
    // Brids Object 
    b1.egg();
    b1.fly();
    b1.animal();
    b1.eat();


    // Dogs Object
    d1.breed("German Sheferd \n");
    cout<<d1.GetBreed()<<endl;
    d1.eat();
    d1.animal();
    return 0;
}