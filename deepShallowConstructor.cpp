#include <iostream>
using namespace std;

class sample{
    int c;
};

class test{
    sample *a;
    float b;
public:
    test()
    {
        cout << "Constructor\n";
        a = new sample();     b=0;
    }
    test(test& t)                       // Copy Constructor
    {
        cout << "Copy Constructor\n";
        //  a = t.a;                            // Shallow Copy Constructor
        a = new sample(*t.a);    b=t.b;         // a=new...  makes it Deep copy constructor because
    }                                           // destructor deletes a in this case & no redundancy create
    ~test()
    {
        cout << "Destructor\n";
        delete a;
    }
};

int main()
{
    test p, q(p);

    return 0;
}