#include <iostream>
#include <vector>
using namespace std;


void understand_vec1(){
    vector< int > vec ={1,2,3,4};
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}

void under2(){
    vector <int > vec;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(1);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;


}
int main(){
    understand_vec1();
    cout << " END "<<endl;
    under2();
    return 0;

}