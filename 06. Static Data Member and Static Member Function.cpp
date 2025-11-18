Aim: To demonstrate constructors (default, parameterized, copy) and destructor in C++. 

Program: 
#include <iostream> 
using namespace std; 
 
class Sample { 
    int x, y; 
 
public: 
    Sample() { 
        x = 0; 
        y = 0; 
        cout << "Default Constructor called" << endl; 
    } 
 
    Sample(int a, int b) { 
        x = a; 
        y = b; 
        cout << "Parameterized Constructor called" << endl; 
    } 
 
    Sample(const Sample &s) { 
        x = s.x; 
        y = s.y; 
        cout << "Copy Constructor called" << endl; 
    } 
 
    void display() { 
        cout << "x = " << x << ", y = " << y << endl; 
    } 
 
    ~Sample() { 
        cout << "Destructor called for object" << endl; 
}; 
} 
int main() { 
Sample s1;           
Sample s2(10, 20);   
Sample s3 = s2;      
s1.display(); 
s2.display(); 
s3.display(); 
return 0; 
}
