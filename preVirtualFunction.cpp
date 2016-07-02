#include <iostream>
using namespace std;

class A{
public:
 /* virtual */ void display() { cout << "\nClass A\n"; }
};

class B: public A{
public:
    void display() { cout << "\nClass B\n"; }
};

int main()
{
    A a;
    B b;
    A *ap;
    B *bp;          // no need of *bp while using virtual function, we can point to both classes with single pointer
    
    ap = &a;
    bp = &b;
    
    a.display();
    b.display();
    ap->display();
    bp->display();
    
    ((A *)bp)->display();
    ((B *)ap)->display();
    
    ap = &b;
    
    ap->display();          // a pointer points to B class(derived)
                            // but shows the result ::: Class A because of ap is of type class A
                            // after taking virtual function in Class A result ::: Class B
    
    return 0;
}