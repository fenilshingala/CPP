#include <iostream>
using namespace std;

class time{
    
    int hour, min;
public:
    time(int t): hour(t/60), min(t%60) {}
    void display(){ cout <<hour<<":"<<min; }
    
};

int main()
{
    int t;
    class time a(t);
    cout << "Enter time in minutes:";
    cin >> t;
    a = t;
    cout << "Time is (Hours : Minutes):\t";
    a.display();
    cout<<endl;
    
    return 0;
}