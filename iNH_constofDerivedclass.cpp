#include <iostream>
using namespace std;

class A{
    float a;
public:
 // A(int i): A(i) {}          Error: Constructor for 'A' creates a delegation cycle
    
    A(int i)    { a=i; }
    void display()  { cout << a << "\t"; }
};

class B{
    int b;
public:
 // B(int j): B(j) {}        //  Error: Constructor for 'B' creates a delegation cycle
    
 // B(int j): b(j) {}        //  Thread 1: breakpoint 1.1

    B(int j)    { b=j; }
    void display()  { cout << b << "\t"; }
};


class C: public A, public B{
    int m,n;
public:
    C(float a, int b, int c, int d):
    A(a), B(b) { m=c; n=d; }
    void display()  { cout << m << "\t" << n << endl; }
};

int main()
{
    int q,r,s;
    float p;
    cout << "Enter a,b,m,n: ";
    cin >> p >> q >> r >> s;
    
    C c(p,q,r,s);
    
    cout << "Entered values are: ";
    
    c.A::display();
    c.B::display();
    c.display();
    
    return 0;
}