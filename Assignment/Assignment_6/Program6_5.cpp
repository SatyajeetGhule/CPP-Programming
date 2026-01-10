////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Replace
//  Description   : Write Generic program to Replace all occurences of a value.
//  Input         : Generic
//  Output        : Generic
//  Author        : Satyajeet Manohar Ghule
//  Date          : 08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

template <class T>
T Replace(T *Arr, int iSize, T OldValue, T NewValue)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == OldValue)
        {
            Arr[iCnt] = NewValue;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 5, 40, 50};
    float brr[] = {10.5f, 3.2f, 9.8f, 7.1f};
    int iCnt = 0;

    Replace(arr, 5, 5, 99);
    Replace(brr, 4, 3.2f, 0.0f);

    cout << "After Replace (int):\n";
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        cout << arr[iCnt] << " ";
    }

    cout << "\nAfter Replace (float):\n";
    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        cout << brr[iCnt] << " ";
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input        : 10  20   5   40   50
//  Ouptput      : 10  20   99  40   50
//
////////////////////////////////////////////////////////////////////////////////
