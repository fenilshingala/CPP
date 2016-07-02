#include <iostream>
using namespace std;

class A{
public:
    void print()
    {
        function();
    }
    virtual void function()             // virtual - Late(Runtime) Binding, if not Early Binding
    {
        cout << "A\n";
    }
};

class B: public A{
public:
    virtual void function()             // virtual
    {
        cout << "B\n";
    }
};

int main()
{
    A a;
    a.print();
    
    B b;
    b.print();
    
    return 0;
}