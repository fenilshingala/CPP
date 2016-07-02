#include <iostream>
using namespace std;

class B{
    
    int a;
public:
    int b;
    void get()    { cin >> a >> b; }
    int displaya()
    {
         return a;
    }
    
};

class D:public B{
    
public:
    int c;
    void getc()    { cin >>c; }
    void display()
    {
        cout << "Values of a,b,c: ";
        cout << displaya() << "\n" << b << "\n" << c << endl;
    }
    
};

int main()
{
    D d;
    cout << "Enter a,b and c:";
    d.get();
    d.getc();
    d.display();
    
    return 0;
}