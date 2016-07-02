#include <iostream>
using namespace std;

class A{
    int a;
public:
    A() { cout << "Constructor\n"; }
    ~A() { cout << "Destructor\n"; }
    
    void geta() { cin >> a; }
    void display() { cout << a << endl; }
};

int main()
{
    A a;
    cout <<"Enter a:";
    a.geta();
    a.display();
    
    return 0;
}