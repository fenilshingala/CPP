#include <iostream>
using namespace std;

int add(int x, int y)
{ return x+y; }

int sub(int x, int y)
{ return x-y; }

int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    
    int (*v)(int, int);         // Function Pointer
    v=sub;                      // Runtime Binding -- try changing value of v: sub -> add
    
    cout << "Answer: " << v(a,b) << endl;
    
    return 0;
}