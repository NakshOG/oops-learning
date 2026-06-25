/*
CONST KEYWORD:

const means the value cannot be modified after initialization.

1) const variable:
------------------
const int x = 10;
x = 20;   // ERROR

A const variable must be initialized when created.


2) const with class data members:
---------------------------------

class Student {
    const int roll;
};

A const data member cannot be assigned later inside constructor body.
It MUST be initialized using initializer list.


3) const member function:
-------------------------

class Student {
    int age;

public:
    int getAge() const {
        return age;
    }
};

The const after function name means this function cannot modify
the object's data members.

void change() const {
    age = 20;   // ERROR
}


------------------------------------------------

INITIALIZER LIST:

Used to initialize data members before constructor body executes.

Syntax:

class Student {
    int age;
    const int roll;

public:
    Student(int a, int r) : age(a), roll(r) {
        // constructor body
    }
};

Here:
age(a), roll(r) executes BEFORE constructor body.


Why initializer list is needed:

1) To initialize const members:

class A {
    const int x;

public:
    A(int val) : x(val) {}  // correct
};


2) To initialize reference members:

class A {
    int &ref;

public:
    A(int &x) : ref(x) {}
};


3) To call parent class constructors (Inheritance)

class Child : public Parent {
public:
    Child() : Parent() {}
};


4) More efficient for objects:
Avoids default construction followed by assignment.


Remember:
Constructor body assigns values.
Initializer list directly initializes values.

Order of initialization depends on declaration order in class,
NOT the order written in initializer list.
*/