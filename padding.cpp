#include <iostream>
using namespace std;

class Student {
public:
    char grade;   // 1 byte
    int age;      // 4 bytes
};

int main() {
    cout << sizeof(Student);
    //expected 5 but output is 8 
    //The compiler inserts 3 padding bytes after char so that int starts at an address divisible by 4.
    //The compiler does this because CPUs access data faster when variables are stored at memory addresses that are multiples of their size (called alignment).
}