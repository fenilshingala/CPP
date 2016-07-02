#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], temp;
    int i=0, j;
    
    cout << "Enter a string: ";
    cin >> str;
    
    j = strlen(str)-1;
    
    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    
    puts(str);
    
    return 0;
}