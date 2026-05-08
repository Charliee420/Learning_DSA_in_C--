#include <iostream>
using namespace std ;

enum shap{
    circle,
    rectangle,
    triangle
};

int main(){
    cout <<"Enter shape code :";
    int code ;
    cin >>code ;
    while (code >= circle && code <= triangle){
        switch (code)
        {
        case circle:
            cout<<"entered circle ";
            break;
        case rectangle:
            cout<<"entred rect";
            break;
        case triangle:
            cout<<"entred tri ";
            break;
        
        
        default:
            break;
        }
        cout <<"enter shape code :";
        cin >>code;

    }
    cout<<"BYE \n ";
    return 0;
}