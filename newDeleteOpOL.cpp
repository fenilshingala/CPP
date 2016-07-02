#include <iostream>
using namespace std;

class A{
    char* name;
    int age;
public:
    A()
    {
        char a[10] = "Default";
        name = a;
        age = 0;
    }
    
    A(char* n, int a)
    {
        name = n;
        age = a;
    }
    
    void* operator new(size_t s)
    {
        void* np;                       // null pointer
        cout << "overloaded new. size is: " << s << endl;
        np = malloc(s);
        if(!np)
        {
            bad_alloc b;
            throw b;
        }
        return np;
    }
    
    void display()
    {
        cout << "Name is " << name << " and age is " << age <<".\n";
    }
    
};

int main() {
    char naam[6] = "Fenil";
    A *a = new A();
    A *a1 = new A(naam, 18);
    a->display();
    a1->display();

    return 0;
}