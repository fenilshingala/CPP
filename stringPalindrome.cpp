//
//  main.cpp
//  stringPalindrome
//
//  Created by Fenil Shingala on 01/05/16.
//  Copyright © 2016 Fenil Shingala. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    char str[10], rstr[10]={'\0'};
    int i, l=0, flag=0;
    cout << "Enter a string: ";
    gets(str);
    
    for(i=0; str[i]!='\0'; i++)
    {
        l++;
    }
    
    for(i=l-1; i>=0; i--)
    {
        rstr[l-1-i] = str[i];
    }
    
    for(i=0; i<l; i++)
    {
        if(str[i] == rstr[i])
            flag = 0;
        else
            flag = 1;
    }
    
    if(flag == 1)
        cout << "Not Palindrome\n";
    else if(flag == 0)
        cout << "Palindrome\n";

    return 0;
}
