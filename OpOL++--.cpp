#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hours;             // 0 to 23
    int minutes;           // 0 to 59
public:
    Time(int h, int m) : hours(h), minutes(m) { }
    void display()
    {
        cout << "H: " << setfill('0') << setw(2) << hours << " M: " << setfill('0') << setw(2) << minutes << endl;
    }
    Time operator ++(int)               // int for postfix
    {
        minutes++;
        if(minutes >= 60){
            hours++;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
};;

int main()
{
    Time t1(3,59);
    t1.display();
    t1++;                               // postfix
    t1.display();
    
    return 0;
}