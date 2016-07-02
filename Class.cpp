#include <iostream>
using namespace std;

class addition{
    int n1,n2;
public:
    void add(int n1, int n2);
    void display(void){
        cout << "Addition of this two number is:" << (n1+n2) << endl;
    }
};

void addition :: add(int a, int b)
{
    cout << "Enter a and b:";
    cin >> n1;
    cin >> n2;
}

int main()
{
    addition a;
    int num1,num2;
    a.add(num1,num2);
    a.display();
    return 0;
}