#include <iostream>
using namespace std;

class set
{
    int a,b;
public:
    void insert(int , int );
    int largest(void );
    void display(void );
}A;

void set :: insert(int x, int y)
{
    a=x; b=y;
}

int set :: largest()
{
    if(a>=b)
        return a;
    else
        return b;
}

void set :: display()
{
    cout << "largest number is " << largest() << endl;
}

int main()
{
    int x,y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    
    A.insert(x,y);
    A.display();
    return 0;
}