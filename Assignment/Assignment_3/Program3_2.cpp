////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////
//
//  Class Namee   :    Demo
//  Function Name :    Sum
//  Description   :    Accept number from user and return summation of 
//                     its digits.
//  Input         :    Integer
//  Output        :    Integer
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    11/12/2025
//
////////////////////////////////////////////////////////////////////////////

class Demo
{
    public :
    int Sum(int iNo)
    {
        int iDigit = 0;
        if(iNo == 0)

        return 0;

        iDigit = iNo % 10;

        return iDigit + Sum(iNo / 10);
    }
};

////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo dobj;
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number :\n");
    scanf("%d",&iValue);
    iRet = dobj.Sum(iValue);
    printf("Summation of Digit is : %d\n",iRet);
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :   879    Output  :   24
//
////////////////////////////////////////////////////////////////////////////