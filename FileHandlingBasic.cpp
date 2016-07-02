#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream obj("File.txt");
    
    obj << "HEllo there";
    obj.close();
}