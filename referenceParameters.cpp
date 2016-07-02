#include <iostream>
using namespace std;

class sample{
public:
    int a;
    friend void fun(sample& s)
    {
        s.a++;
    }
};

int main()
{
    sample sObj;
    sObj.a = 0;
    
  //  fun(sObj);                      // does "sample s=sObj" in  --> friend fun(sample s) {...}
                                      // Will not differ original value of sObj.a
    
    fun(sObj);
    cout << sObj.a << "\n";
    
    return 0;
}
