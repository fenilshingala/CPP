//
//  main.cpp
//  stringPalindromeRecursion
//
//  Created by Fenil Shingala on 01/05/16.
//  Copyright © 2016 Fenil Shingala. All rights reserved.
//

#include <iostream>
using namespace std;

void Palindrome(char* str, int i)
{
    int j = strlen(str)-1 - i;
    if(str[i] == str[j])
    {
        if(i+1 == j || i == j){
            cout << "Palindrome!\n";
            return;                                 // return necessary
        }
        Palindrome(str, i+1);
    }
    else{
        cout << "not Palindrome!\n";
    }
}

int main()
{
    char str[10];
    int len=0;
    
    cout << "Enter a string: ";
    gets(str);
    
    for(int i=0; str[i]!='\0'; i++)
    {  len++;  }
    
    Palindrome(str, 0);
    
    return 0;
}
