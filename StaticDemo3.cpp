#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;
    static int x;

    Demo()
    {
        this->i = 0;
        this->j = 0;
    }

    Demo(int a, int b)
    {
        this->i=a;
        this->j=b;
    }

    void fun()    // void fun(Demo * const this)
    {
        cout<<"Inside Fun";
        cout<<"Value of i is : "<<this->i<<"\n";
        cout<<"Value of j is : "<<this->j<<"\n";
        cout<<"Valuve of x is : "<<x<<"\n";
    }

    static void Gun()  //static void Gun()
    {
        cout<<"Inside Gun";
        //cout<<i<<"\n";   // Not Allowed
        //cout<<j<<"\n";   // Not Allowed
        cout<<x<<"\n";
    }
};

int Demo:: x = 11;

int main()
{
    Demo::Gun();
    cout<<"Value of X is : "<<Demo::x<<"\n";
    
    Demo obj(10,20);
    
    obj.fun();

    obj.Gun();   //Demo:: Gun();

    cout<<"Size of obj is : "<<sizeof(obj)<<"\n";
    return 0;
}