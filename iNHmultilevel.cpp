#include <iostream>
using namespace std;

//student roll no class
class student{

protected:
    int roll;
public:
    void getroll()  { cin >> roll; }
    int putroll()   { return roll; }
};


//student marks class
class test: public student{
    
protected:
    int marks1, marks2;
public:
    void get1()     { cin >> marks1; }
    void get2()     { cin >> marks2; }
};


//student result class
class result: public test{

    int total;
public:
    int display()   { return (marks1 + marks2); }
};


//Main Function
int main()
{
    result r;
    cout << "Enter Roll_no of Student(Hit -1 to end): ";
    r.getroll();
    
    while(r.putroll() != -1)
    {
        cout << "\nEnter Marks of 2 Subjects: ";
        r.get1();
        r.get2();
        
        cout << "\nTotal of two is: " << r.display();
        
        cout << "\n\n\nEnter Roll_no of Student(Hit -1 to end): ";
        r.getroll();
    }
    
    
    return 0;
}