#include <iostream>
using namespace std;

const int size =3;

class vector{
    int* v;
    int size;
public:
    vector(){
        v = new int[size];
        for(int i=0; i<size; i++)
            v[i] = 0;
    }
    
    vector(int* a){
        
        for(int i=0;i<size;i++)
        { v[i] = a[i]; }
        
        
        /*   int i=0;
         while(a[i]!='\0'){
         i++;
         }
         size=i+1;
         
         for(i=0;i<size;i++){
         v[i]=a[i];
         }       */
        
    }
    
    int operator *(vector &y){
        int sum=0;
        for(int i=0;i<size;i++)
            sum += this->v[i] * y.v[i];
        return sum;
    }
};


int main()
{
    int /* i=0, j=0, */ a[size]={1,2,3};
    int b[size]={4,5,6};
    
    /* cout << "Size of both the vectors must be same for Multiplication.";
     cout << "Enter two vectors(0 to end either vector): ";
     while(a[i]!=0){
     cin >> a[i];
     i++;
     }
     while(b[j]!=0){
     cin >> a[j];
     j++;
     }       */
    
    
    vector v1(a);
    vector v2(b);
    
    int v3 = v1 * v2;
    
    cout << "Multiplication of both is: " << v3 << endl;
    
    return 0;
}