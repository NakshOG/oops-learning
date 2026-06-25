#include <iostream>
#include "Hero.cpp"  // alag file me bhi class definedd ho to bhi use kr skte h 
using namespace std;

//class define  ends with a semicolonn coz self defined data structure like struct node
// class Hero{
//     //properties
//     char name [100];
//     int health;
//     char level;
// };

int main(){
    //object creation 
    Hero ramesh;
    ramesh.health =70; //assigning values to the object 
    ramesh.level = 'A';
    cout<<ramesh.health<<endl; //accessig those values assigned before
    cout<<ramesh.level;
    return 0;
}