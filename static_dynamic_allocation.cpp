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
    // static
    Hero a; 
    a.setHealth(80);
    a.setLevel('A');
    cout<<a.level<<endl;
    cout<<a.getHealth()<<endl;

    // dynamically
    Hero* b = new Hero; 
    b->setHealth(70);
    b->setLevel('B');
    cout<<(*b).level<<endl;
    cout<<(*b).getHealth()<<endl;

    //OR we can write it as 
    cout<<b->level<<endl;
    cout<<b->getHealth()<<endl;

    return 0;
}