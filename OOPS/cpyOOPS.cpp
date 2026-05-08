#include <iostream>
#include <string>

using namespace std;


class car {
    public:
    string name ;
    string clor;
    car (string name , string clor ){
        this -> name = name ;
        this -> clor = clor;
    }
};


int main (){
    car c1("Lamgorgini ", "Green ");
    cout<<"Name : "<<c1.name<<"  \n"<<"color : "<<c1.clor<<endl;
    
    car c2(c1);
    cout<<"Name : "<<c2.name<<"  \n"<<"color : "<<c2.clor<<endl;
    
    return 0;
    // c1.name = 
}