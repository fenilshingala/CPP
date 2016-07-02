//
//  main.cpp
//  2
//
//  Created by Fenil Shingala on 30/04/16.
//  Copyright © 2016 Fenil Shingala. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

void swap(char &x, char &y)
{
    char temp;
    temp = x;
    x = y;
    y = temp;
}

void permute(char* str, int current, int end)
{
    if(current == end)
        cout << str << "\n";
    else
        for(int i=current; i<=end; i++){
            swap( str[current] , str[i] );
            permute(str, current+1, end);
            swap( str[current] , str[i] );
        }
}

int main()
{
    int n;
    char str[20];
    
    cout << "Enter string length: ";
    cin >> n;
    cout << "Enter a string: ";
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    
    permute(str, 0, n-1);
    
    return 0;
}