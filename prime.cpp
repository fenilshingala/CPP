#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n)
{
    if ( n==1 || n==2 )
        return true;
    else if( n%2 == 0 )
        return false;
    
    for( int i=2; i<n; i++ )
    {
        if( n%i == 0 )
            return false;
        else if( n == i+1 )
            return true;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    bool b = prime(num);
    cout << b << "\n";
    
    cout << ((b==1) ? "prime\n":"not prime\n");
    
    return 0;
}
