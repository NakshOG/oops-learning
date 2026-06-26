// wrapping up data members and functions in a single unit called class is known as encapsulation.
// fully encapsulated class is the class in which all the data members are private and can be accessed only through public member functions.same class me hi use kr paenge hum ab bas different class me nhi use kr skte h 
//adv of encapsulation - information / data hiding
// we can make the class read only by only making getter and no setter
#include <iostream>
using namespace std;

class Student{

    private:
      string name;
      int age;
      int height;
    
      public:
      int getAge(){
        return this->age;
      }
};

int main(){

    Student first;
    cout<<first.getAge()<<endl;
    return 0;
}