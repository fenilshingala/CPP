#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    
    try{
        
        if(x==-1)
            throw x;
        cout << "After throw!";             // Never Executed part!
        
    }catch(int){
        
        cout << "Exception!\n";
        
    }
    
    return 0;
}