//
//  main.cpp
//  stringPalMaxMin
//
//  Created by Fenil Shingala on 01/05/16.
//  Copyright © 2016 Fenil Shingala. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[100], b[20][10];
    int space=0, i, k, j;
    cout << "Enter a string: ";
    cin.getline(a, 99);
    
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==' ')
             space++;
    }
    cout << space << "\n";
    
    i=0;
    
    for(j=0; j<=space; i++, j++)
    {
        k=0;
        while(a[i]!='\0'){
            
            if(a[i]==' ')
                break;
            else{
                b[j][k++] = a[i];
                i++;
            }
        }
        b[j][k]='\0';
    }
    
    for(j=0; j<=space; j++)
    {
        cout << b[j] << "\n";
    }
    
    return 0;
}
