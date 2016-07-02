#include <iostream>
using namespace std;

namespace sample1{
    
    void fu(){
        cout << "S1\n";
    }
    
    namespace ex{
    
        class test{
            int a;
        public:
            test(int x) : a(x) {}
            void display(){
                cout << a << endl;
            }
        };
        
    }
}

namespace sample2 {
    void fu(){
        cout << "S2\n";
    }
}

using namespace sample2;
using namespace sample1 :: ex;

int main()
{
    test a(5);
    a.display();
    fu();
    
    return 0;
}