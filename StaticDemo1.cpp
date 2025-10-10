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
    }

    static void Gun()  //static void Gun()
    {
        cout<<"Inside Gun";
    }
};

int Demo:: x = 11;

int main()
{
    Demo::Gun();
    cout<<"Value of X is : "<<Demo::x<<"\n";
    return 0;
}