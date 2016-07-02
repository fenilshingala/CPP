#include <iostream>
using namespace std;

int main()
{
    int num, n, x, rev=0;
    cout << "Enter a number: ";
    cin >> num;
    n=num;
    
    while (num > 0) {
        x = num % 10;
        rev = rev * 10 + x;
        num = num / 10;
    }
    
    cout << ((n == rev) ? "palindrome\n" : "not palindrome\n");
    
    return 0;
}
