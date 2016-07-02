#include <iostream>
using namespace std;

void fun2()
{
    int b;
    int* p = &b;
    
    for(int i=0; i<20; i++)
    {
/*        if( *(p+i) == 2225 )
            *(p+i) = 1111;      */
        cout << *(p+i) << "\n";             // one of 'em will be 2225 <- Another functions data in the Stack
    }
    
}

void fun1()
{
    int a=2225;
    fun2();
}

int main()
{
    fun1();
    
    return 0;
}