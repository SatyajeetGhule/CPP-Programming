#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    
    private:
        int j;

    protected:
        int k;
    
    public:
        Base()
        {
            i = 10; j=20; k=30;
        }
        void fun()
        {
            cout<<i<<"\n";   //allowed
            cout<<j<<"\n";   //allowed
            cout<<k<<"\n";   //allowed          
        }
};

class Derived : public Base
{
    public:
        void display()
        {
            cout<<i<<"\n";   //allowed
            cout<<j<<"\n";   //not allowed (ERROR)
            cout<<k<<"\n";   //allowed         
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";     //allowed  
    cout<<bobj.j<<"\n";     //not allowed(ERROR)
    cout<<bobj.k<<"\n";     //not allowed(ERROR)

    cout<<dobj.i<<"\n";     //allowed
    cout<<dobj.j<<"\n";     //not allowed(ERROR)
    cout<<dobj.k<<"\n";     //not allowed(EEROR)

    dobj.fun();       //allowed
    dobj.display();   //allowed

    return 0;
}