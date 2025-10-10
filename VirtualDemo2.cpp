#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base Fun";
        }
        void gun()
        {
            cout<<"Inside Base Gun";
        }
        void sun()
        {
            cout<<"Inside Base Sun";
        }
        void bun()
        {
            cout<<"Inside Base Bun";
        }

};
class Derive:public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived Gun";
        }
        void sun()
        {
            cout<<"Inside Base Sun";
        }
        void run()
        {
            cout<<"Inside Base Run";
        }
        void mun()
        {
            cout<<"Inside Base Mun";
        }
};

int main()
{
    Base * bp1 = new Base();      //no casting
    Derive * dp1 = new Derive();   //no casting

    Base * bp2 = new Derive();     // up-casting
    Derive * dp2 = new Base();     //down casting  ------> ERROR
    
    return 0;
}