#include <iostream>
using namespace std;

class A{
public:
    void display()  { cout << "A\n"; }
};


class B: public A{
public:
    void display()  { cout << "B\n"; }
};


class C: public B{
public:
    void display()  { B::display(); }
};

int main()
{
    B b;
    C c;
    b.display();
    b.A::display();
    c.display();
    
    return 0;
}
