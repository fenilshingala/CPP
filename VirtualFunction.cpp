#include <iostream>
using namespace std;

class A{
    int a;
public:
    void display() { cout << "Class A\n"; }         // use virtual, observe change in output
};

class B: public A{
public:
    void display() { cout << "Class B\n"; }
};

int main()
{
    A a;
    B b;
    B *bp = &b;
    A *ap = &a;
    
    ((A *)bp)->display();
    ((B *)ap)->display();
    
    ap = &b;
    
    ap->display();
    
    return 0;
}