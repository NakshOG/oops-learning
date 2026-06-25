#include <iostream>
using namespace std;

//class define  ends with a semicolonn coz self defined data structure like struct node
class Hero{
    //properties

    private:
    int health;
    public:
    char level;

    // parameterised constructor
    Hero(int health,char level){
        this -> level = level;
        this -> health = health;  // this keyword stored the location of the current object 
        // so here it means this->health means ramesh the objects health is updadted by the given health which is passed by the constructor
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
// ek bhi agar custom comparator hamare code me hoga to default comparator kabhi call nhi hoga wo gayab hi hogya h 

int main(){
    
    Hero Ramesh(10,'A');
    cout<<&Ramesh;
    Hero *h = new Hero(11,'B'); 
    cout<<h->getHealth();
    return 0;
}