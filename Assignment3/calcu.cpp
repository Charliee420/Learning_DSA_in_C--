#include <iostream> 
using namespace std;

int main (){
    int a,b;
    cout<<"ENTER 2 NUMBERS FOR DOING OPREAIONS "<<endl;
    cin>>a;
    cin>>b;
    int op;
    cout <<"ENTER OPRATION"<<"\n"<<"1.ADD\n2.SUB\n3.MULT\n4.DIV"<<endl;
    cin>>op;
    switch(op){
        case 1 :
            cout<<a+b<<endl;
            // return a+b;
            break ;
        case 2 :
            // return a-b;
            cout<<a-b<<endl;
            break ;
        case 3 : 
            // return a*b;
            cout<<a*b<<endl;
            break;
        case 4 : 
            // return a/b;
            cout<<(a / b)<<endl;
            break;
        default : 
            cout<<"INVALID OP"<<endl;
    }

}