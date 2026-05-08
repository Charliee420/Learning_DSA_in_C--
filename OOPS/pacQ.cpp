#include <iostream>
using namespace std;

class A {
public :
    A (){cout << "this is a A counstruct.."<<endl;}
    ~A (){cout << "this is a A distruct.."<<endl;}
    

};

class B : public A{
    public :
    B(){cout << "this is a B counstruct.."<<endl;}
    ~B (){cout << "this is a B distruct.."<<endl;}
};

int main (){
    B obj;
    return 0;
}