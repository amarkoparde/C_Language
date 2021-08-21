/*
Problem statement :
Accept number from user and check whether number is palindrome or not.

 Input : 1278   Output : FALSE
 Input : 121    Output : TRUE
 Input : 272   Output : TRUE
 Input : 202   Output : TRUE
 Input : -56    Output : FALSE
 */

/*
    Algorithm:

    START
        Accept number as no
        create one variable as reverse and initialize it to 0
        create one variable as digit and initialize it to 0

        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
            store the result of reverse * 10 + digit into the reverse variable again
            perform / 10 with the no
        continue

        if the reverse number and original number is same
            then return TRUE
        otherwise
            return FALSE

 END

 */

#include<stdio.h>
typedef  int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////
//
//  Function name : ReverseNumber
//  Input : Integer
//  Output :    Integer
//  Description :   It is used to reverse the number
//  Author : Amar Raghunath Koparde
//
//////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)      // 1507     150     15      1       0
{
    int iDigit = 0;     //      0   7   0       5       1
    int iRev = 0;       //      0   7   70      705     7051

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

//////////////////////////////////////////////////////////////
//
//  Function name : ChkPalindrome
//  Input : Integer
//  Output :    BOOLEAN
//  Description :   It is used to check the palindrome number
//  Author : Amar Raghunath Koparde
//
//////////////////////////////////////////////////////////////

BOOL ChkPalindrome(int iNo)
{
    int iRet = 0;

    iRet = ReverseNumber(iNo);

    if(iRet == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

// Entry point function
int main()
{
    int iValue = 0;          // 1507
    BOOL bRet = FALSE;              // 7051

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkPalindrome(iValue);   // ReverseNumber(1507)

    if(bRet == TRUE)
    {
        printf("It is palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }

    return 0;       // Success to OS
}
