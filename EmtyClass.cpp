#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display()
        {
            cout<<"Inside Desplay";
        }
};

int main()
{
    Demo dobj;
    cout<<sizeof(dobj); //1 byte

    return 0;
}