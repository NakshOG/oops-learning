#include <iostream>
using namespace std;

//class define  ends with a semicolonn coz self defined data structure like struct node
class Hero{
    //properties

    private:
    int health;
    public:
    char level;

    // default constructor
    //constructor - no i/p parameter no return type  object creation
    Hero(){
        cout<<"constructor called "<<endl;
    }
    //getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }

};

int main(){
    
    Hero Ramesh;
    return 0;
}