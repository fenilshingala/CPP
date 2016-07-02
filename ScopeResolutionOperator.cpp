#include <iostream>
using namespace std;
int b1=30;

int main()
{
    int b1=10;
    cout << "b1 = " << b1 << endl;
    {
        int b1=20;
        cout << "inner b1 = " << b1 << endl;
    }
    cout << "b1 =" << b1 << endl;
    cout << "global b1 =" << ::b1 << endl;    //scope resolution operator
    return 0;
}