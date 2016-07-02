#include <iostream>
using namespace std;

template <class T>
class A{
    T m, n;
public:
    A(T a, T b): m(a), n(b)  {}     // syntax
    
    T max();
};

template <class T>
T A<T>::max()
{
    return (m>n ? m:n);
}

int main()
{
    A <int>a(4.4,3.3);
    cout << a.max() <<endl;
    
    return 0;
}