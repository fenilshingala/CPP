#include <iostream>
using namespace std;

class area{
    int l, b;
public:
    area(): l(5),b(2) {}                    //syntax
    area(int x, int y): l(x), b(y) {}       //syntax
    
    int ans()   {   return (l*b);   }
};

int main()
{
    int t1, t2;
    area a1(1,2), a2;
    
    t1 = a1.ans();
    t2 = a2.ans();
    
    cout << "Area of 1st is: " << t1 << endl;
    cout << "Area of 2nd is: " << t2 << endl;
    
    return 0;
}