#include <iostream>
using namespace std;

void display()
{
    try{
        cout << "Try\n";
        throw (float)1;         // float throwed
    }catch(float x){            // float catched
        cout<< "Catch\n";
        throw;                  // float ReThrowed
    }
}

int main()
{
    try{
        cout << "Try(Main)\n";
        display();
    }catch(float x){                // float catched
        cout << "Catch(Main)\n";
    }
}