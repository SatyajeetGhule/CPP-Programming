#include<iostream>
using namespace std;
int main()
{
    int length =0;
    int *Arr =NULL;

    cout<<"Enter the number of elements :\n";
    cin>>length;

    //step 1 : allocate the memory...
    Arr = new int[length];
    if(Arr == NULL)
    {
        cout<<"Unable to allocate memory\n";
    }
    else
    {
        cout<<"Memory gets successfully allocated :\n";
    }

    //step 2 : Use the Memory...

    //step 3 : Deallocate the Memory...
    delete []Arr;
      
    return 0;
}