#include<iostream>
#include<new>
using namespace std;

int main()
{
    try{
        while(true){
            new int[100000000ul];                   // throws default exception of bad allocation
        }
    }catch(/*std::*/bad_alloc &b){
        cout << "Error: " << b.what() <<"\n";       // what returns explanatory string
    }
    return 0;
}
