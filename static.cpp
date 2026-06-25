// it is a data member 
// belongs to class
// access krne ke liye object banane ki need nhi hoti
#include <iostream>
using namespace std; 
class Hero{
    public:
    static int timeToComplete;

};
// pehle initialise krna pdega isko class ke bahar and main ke bhi bahar
int Hero::timeToComplete = 5;
// datatype int fir class name fir (scope resolution operator):: fir variable name for = fir value
int main(){
    cout<<Hero::timeToComplete<<endl;
    return 0;
    // yaha pe humne bina object create kre use krlia wo class variable 
    // class ko belong krta h 
    Hero a;
    a.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    // ese bhi chal jaega par ese na hi use kre to acha h 
    // bad practise h ye 
    // isme this keyword nhi hota kyunki ispe koi current object hi nhi h 
    // static function bhi static member ko hi access kr skta h 
    
}
