#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
        void gun()
        {
            cout<<"Inside Base Gun\n";
        }
        virtual void sun()
        {
            cout<<"Inside Base Sun\n";
        }
        virtual void bun()
        {
            cout<<"Inside Base Bun\n";
        }

};
class Derive:public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived Gun\n";
        }
        void sun()
        {
            cout<<"Inside Derive Sun\n";
        }
        void run()
        {
            cout<<"Inside Base Run\n";
        }
        void mun()
        {
            cout<<"Inside Base Mun\n";
        }
};

int main()
{
    

    Base * bp = new Derive();     // up-casting

    
    bp->fun();    //Base fun
    bp->gun();    //Base gun
    bp->sun();    //Derive sun
    // bp->run();    //ERROR
    // bp->mun();    //ERROR
    bp->bun();    //Base bun
    
    return 0;
}