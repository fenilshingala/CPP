#include <iostream>
using namespace std;

template <class T>
class A{
public:
    void display(T x){
        cout << x << " is a number!\n";
    }
};


//Specialisation of class for char
template <>
class A<char>{
public:
    void display(char x){
        cout << x << " is a character!\n";
    }
};


int main()
{
    A <int>a;
    a.display(4);
    
    A <char>b;
    b.display('u');
    
    return 0;
}