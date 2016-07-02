#include <iostream>
using namespace std;

int devide(int a, int b)
{
    if(b!=0)
        return a/b;
    else
        throw 1;
}

int main()
{
    
    try{
        devide(10,5);
        devide(10,0);
    }catch(int x){
        cout << "\nCannot devide by 0\n";
    }
    
    return 0;
}