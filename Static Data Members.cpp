#include <iostream>
using namespace std;

class item{
    
    int num;
    static int count;   //static variable is common for any number of objects
public:
    void get(int x)
    {
        ++count;
        num=x;
    }
    void cnt(void)
    {
        cout << "count= " << count << endl;
    }
    
};

int item :: count;      // static member do not  stored into object, the stored separately
int main()
{
    int x;
    int i=0;
    int j;
    item A[10];
    
    cout <<  "Enter Numbers(-1 to end)(MAX 10):";
    cin >> x;
    while(x != -1)
    {
        A[i].get(x);
        i++;
    }
    for(j=0;j<=i;j++)
    {
        A[i].cnt();
    }
    
    return 0;
}