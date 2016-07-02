#include <iostream>
using namespace std;

class test{
public:
    int a;
    int b;
    virtual void display()  { }
};

class derived1: public test{};

void showPointer(test* T)
{
    int* ptr = reinterpret_cast<int*>(T);
    cout << *ptr << "\n";
}

void testVpointer(test* tObj)
{
    int* t_ptr = reinterpret_cast<int*>(tObj);
    cout << *t_ptr << "\n";     t_ptr++;
    cout << *t_ptr << "\n";     t_ptr++;
    cout << *t_ptr << "\n";     t_ptr++;
    cout << *t_ptr << "\n\n";
}

int main()
{
    test t;
    t.a = 50;
    t.b = 10;
    
    testVpointer(&t);
    
    derived1 d1;
    derived1 d2;
    
    showPointer(&d1);
    showPointer(&d2);       // vpointer of different objs of same class is same
    showPointer(&t);
    
    return 0;
}