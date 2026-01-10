////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : Write Generic program to accept N value and Reverse contents.
//  Input         : Generic
//  Output        : Generic
//  Author        : Satyajeet Manohar Ghule
//  Date          : 08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *Arr, int Size)
{
    int start = 0;
    int end = Size - 1;
    T temp;

    while (start < end)
    {
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

    cout << "Before Reverse :\n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    Reverse(arr, 9);

    cout << "\nAfter Reverse :\n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input        : 10  20  30  10  30  40  10  40  10
//  Search First : 40
//  Ouptput      : 7
//
////////////////////////////////////////////////////////////////////////////////
