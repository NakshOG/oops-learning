#include <iostream>
using namespace std;

//class define  ends with a semicolonn coz self defined data structure like struct node
class Hero{
    //properties

    private:
    int health;
    public:
    char level;
        Hero(int health,char level){
        this -> level = level;
        this -> health = health;
        }
        // copy constructor 
        //wese automatically ban jata h we do not need to make it seperately if we call it like we called below it will come use automatically
        Hero(Hero& temp){
            this->health = temp.health;
            this->level = temp.level;
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
    //object creation 
    Hero Suresh(70,'B');

    Hero R(Suresh); // copy constructor 
    // pass by value me loop ban jaega infinite 
    // better h pass by reference krna h copy constructor me 
    cout<<R.getLevel()<<endl;
    cout<<R.getHealth()<<endl;



    return 0;
}