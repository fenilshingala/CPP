#include <iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int a): x(a)  { cout << "alpha constructed"; }
    void display()  { cout << "\nx = " << x <<endl; }
};


class beta{
    float p, q;
public:
    beta(float a, float b): p(a), q(b + p)  { cout << "\nbeta constructed"; }
    void display()  { cout << "p = " << p << "\nq = " << q << endl; }
};


class gema:public alpha, public beta{               // alpha initialised first
    int u,v;
public:
    gema(float a, int b, int c): beta(a,a), alpha(c*2), u(c), v(b)
    {
        cout << "\ngema constructed";
    }
    void display()  { cout << "u = " << u <<"\nv = " << v << endl; }
};


int main()
{
    gema g(2.5,4,2);
    
    g.alpha::display();
    g.beta::display();
    g.display();
    
    return 0;
}