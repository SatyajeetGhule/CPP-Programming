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
            cout<<"Inside Base Sun\n";
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
    cout<<sizeof(Base)<<"\n";    //16 byte
    cout<<sizeof(Derive)<<"\n";  //20 byte

    Base * bp = new Derive();     // up-casting

    /*
    bp->fun();    //Base fun
    bp->gun();    //Base gun
    bp->sun();    //Base sun
    // bp->run();    //ERROR
    // bp->mun();    //ERROR
    bp->bun();    //Base bun
    */
    return 0;
}