#include <iostream>
using namespace std;

class sample{
    int a, b;
public:
    sample() {}
    sample(int x, int y){
        a=x; b=y;
    }
    void display(){
        cout << "a: " << a << " b: " << b << endl;
    }
    sample operator +(sample& s){
        sample temp;
        temp.a = a + s.a;
        temp.b = b + s.b;
        return temp;
    }
};

int main()
{
    sample s1(10, 10);
    sample s2(20, 20);
    sample s;
    
    s = s1+s2;
    
    s.display();
    
    return 0;
}
