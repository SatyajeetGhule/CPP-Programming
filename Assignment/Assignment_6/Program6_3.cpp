////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMax
//  Description   : Write Generic program to find Second largest element.
//  Input         : Generic
//  Output        : Generic
//  Author        : Satyajeet Manohar Ghule
//  Date          : 08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMax(T *Arr, int iSize)
{
    T max1 = Arr[0];
    T max2 = Arr[1];

    if (max2 > max1)
    {
        T temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < iSize; i++)
    {
        if (Arr[i] > max1)
        {
            max2 = max1;
            max1 = Arr[i];
        }
        else if (Arr[i] > max2 && Arr[i] != max1)
        {
            max2 = Arr[i];
        }
    }

    return max2;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.5f, 3.2f, 9.8f, 7.1f};

    cout << SecondMax(arr, 5) << "\n";
    cout << SecondMax(brr, 4) << "\n";

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input        : 10  20   30   40   50
//  Ouptput      : 40
//
////////////////////////////////////////////////////////////////////////////////
