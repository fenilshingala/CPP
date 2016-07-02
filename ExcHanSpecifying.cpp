#include <iostream>
using namespace std;

void fun(int x) throw(double, char)
{
    if(x == 1)
        throw x;
    else if(x == 2)
        throw 1.3;
    else if(x == 3)
        throw 'x';
}

int main()
{
    try{
//        fun(1);
        fun(2);         // Breaks try-catch system
        fun(3);
    }
    catch(int x){
        cout << "Integer Catched\n";
    }
    catch(double m){
        cout << "Double Catched\n";
    }
    catch(char c){
        cout << "Character Catched\n";
    }
    
    
    // 2nd try-catch system
    try{
//        fun(1);
        fun(2);         // Breaks try-catch system
        fun(3);         // Shows no error wheather there's catch for "Character" or not
    }
    catch(double x){
        cout << "Catched in 2nd try-catch system\n";
    }
    
    cout << "END!\n";
}