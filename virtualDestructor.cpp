#include <iostream>
using namespace std;

class Shape{
public:
    Shape()
    {
        cout << "Base Constructor\n";
    }
    virtual ~Shape()                    // if 'virtual' not used, only this destructor will be initialiesd
    {
        cout << "Base Destructor\n";
    }
    virtual void print()=0;
};

class Circle: public Shape{
public:
    Circle(int r)
    {
        cout << "Constructor Circle. Area = " << (3.14*(r*r)) << "\n";
    }
    ~Circle()
    {
        cout << "Destructor Circle\n";
    }
    void print()
    {
        cout << "Area Print\n";
    }
};

/*      class Rectangle: public Shape{
public:
    Rectangle(int l, int b)
    {
        cout << "area = " << (l*b) << "\n";
    }
    ~Rectangle()
    {
        cout << "Destructor Rectangle\n";
    }
};

class Square: public Shape{
public:
    Square(int a)
    {
        cout << "area = " << (a*a) << "\n";
    }
    ~Square()
    {
        cout << "Destructor Square\n";
    }
};      */

int main()
{
    Shape *S = new Circle(5);
    delete S;                               // if not used, any destructor won't be initialised
    
    return 0;
}