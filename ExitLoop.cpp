#include <iostream>
using namespace std;

int main()
{
    int a[100], i=0;
    cout << "Enter Values:\n";
    cout << "Hit -- Control + d -- to end\n";
    while(cin >> a[i])
    {
        i++;
    }
    
    return 0;
}