#include <iostream>
using namespace std;

//class define  ends with a semicolonn coz self defined data structure like struct node
class Hero{
    //properties

    private:
    int health;
    public:
    char level;
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
    //object creation 
    Hero ramesh;
    // directly private variable ko nahi access kr skte hai like health in this case to we will use getter and setter for this 
    //pehle we can set health of hero object using setter
    ramesh.setHealth(69);
    cout<<ramesh.getHealth()<<endl;
    // now with these functions we can access the private variables as well
    //public wale dono ways se ho skte h 
    

    return 0;
}