#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter 1,2 or 3: ";
    cin >> a;
    try{
        if(a == 1)
            throw a;
        else if(a == 2)
            throw 1.0;
        else if(a == 3)
            throw 'a';
        else throw;
    }
    
    catch(int x){
        cout << "Integer Catch\n";
    }
    catch(double x){                   // Can't use Float
        cout << "Double Catch\n";
    }
    catch(char x){
        cout << "Charcter Catch\n";
    }

/*    catch(...){
        cout << "Catch\n";
    }       */
    
}