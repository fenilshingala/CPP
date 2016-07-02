#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number:";
    cin >> i;
    
    try{
        
        if(i==0)
        {
            cout << "No Error" << endl;
        }
        else
            throw 1;
        
    }catch(int x){
        cout << "Exception Caught. Error!" << endl;
    }
    
    return 0;
}