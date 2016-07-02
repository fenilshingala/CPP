#include <iostream>
using namespace std;

float func(float n)
{
    float temp = 0, lb=0, ub=n;
    for(int i=0; i<50; i++)
    {
        temp = (lb + ub)/2;
        
        if(temp * temp == n)
            break;
        else if(temp * temp > n)
            ub = temp;
        else if(temp * temp < n)
            lb = temp;
    }
    return temp;
}

int main()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "SquareRoot: " << func(num) << endl;
    
    return 0;
}
