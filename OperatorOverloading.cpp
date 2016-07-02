#include <iostream>
using namespace std;

class space{
    
    int a,b,c;
public:
    void getdata(int x,int y,int z) { a=x; b=y; c=z; }
    void display(void);
    void operator -();

};

void space :: operator-()
{
    a=-a;
    b=-b;
    c=-c;
}

void space :: display()
{
    cout <<" a : "<< a << endl;
    cout <<" b : "<< b << endl;
    cout <<" c : "<< c << endl;

}

int main()
{
    space p;
    int x,y,z;
    cout << "Enter a,b & c:";
    cin >> x >> y >> z;
    p.getdata(x,y,z);
    
    -p;
    
    cout << "\nMinus a,b & c are:" <<endl;
    p.display();
 
    return 0;
}