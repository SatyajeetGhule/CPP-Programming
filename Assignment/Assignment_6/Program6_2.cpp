////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdbool.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSorted
//  Description   : Write Generic program to Check whether array is Sorted.
//  Input         : Generic
//  Output        : Generic
//  Author        : Satyajeet Manohar Ghule
//  Date          : 08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

template <class T>
bool CheckSorted(T *Arr, int iSize)
{
    for (int i = 0; i < iSize - 1; i++)
    {
        if (Arr[i] > Arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 60, 40, 50};
    float brr[] = {1.1f, 2.2f, 3.3f};

    bool bRet = CheckSorted(arr, 5);
    cout << (bRet ? "Array is sorted\n" : "Array is not sorted\n");

    bool fRet = CheckSorted(brr, 3);
    cout << (fRet ? "Array is sorted\n" : "Array is not sorted\n");

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input        : 10  20   30   40   50
//  Ouptput      : Array is sorted
//
////////////////////////////////////////////////////////////////////////////////
