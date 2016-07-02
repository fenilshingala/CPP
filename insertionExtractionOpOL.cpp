#include <iostream>
using namespace std;

class sample{
    int a, b;
public:
    istream friend &operator >>(istream &in, sample &s){
        in >> s.a >> s.b;
        return in;
    }
    ostream friend &operator <<(ostream &op, sample &s){
        op << s.a << "\n" << s.b << endl;
        return op;
    }
};

int main()
{
    sample s1;
    cout << "Enter a & b: ";
    cin >> s1;
    
    cout << "a and b are: ";
    cout << s1;
    
    return 0;
}
