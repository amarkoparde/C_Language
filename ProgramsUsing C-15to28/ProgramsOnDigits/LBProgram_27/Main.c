/*
Problem statement : 7.5
Accept number from user and return difference between summation(addition) of even and odd digits.

 Input : 127   Output : -6  (2 - 8)
 Input : 4522   Output : 3 (8 - 5 )
Input : -5842 Output : 9 (14 - 5)
 Input : 442    Output : 10 (10 - 0)
 Input : 735    Output :  -15 (0 - 15)
 */

#include<stdio.h>

int DifferenceSummation(int iNo)
{
    int iEvenSum = 0;        // Variable to store even summation(means addition of even no.)
    int iOddSum = 0;         // Variable to store odd summation(means addition of odd no.)
    int iDigit = 0;          // Variable to store the digit

    if(iNo < 0)              // Updater to convert negative to positive number
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)   // If digit is even
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else                           // If digit is odd
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iEvenSum - iOddSum);        // Return the difference
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DifferenceSummation(iValue);

    printf("Difference between the summation is : %d\n",iRet);

    return 0;   // return to OS
}










