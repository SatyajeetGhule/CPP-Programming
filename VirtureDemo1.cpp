#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

};
class Derive:public Base
{
    public:
        int x;
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derive)<<"\n";  
    
    return 0;
}