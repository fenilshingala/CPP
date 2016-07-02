#include <iostream>
using namespace std;

class complex{

    float x;
    float y;
public:
    void getnum(float a, float b) { x=a; y=b; }
    void display(void) { cout << x << "+" << y; }
    complex operator + (complex);

};

complex complex:: operator + (complex p)
{
    complex temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    return temp;
}

int main()
{
    complex p,q,ans;
    float m,n;
    
    cout << "Enter complex number 1:(Real and Imagenory)";
    cin >> m;       cin >> n;
    p.getnum(m,n);
    
    cout << "\nEnter complex number 2:(Real and Imagenory)";
    cin >> m;       cin >> n;
    q.getnum(m,n);
    
    ans = p + q;
    
    cout << "Addition of two is:";
    ans.display();
    cout<<endl;

    return 0;
}