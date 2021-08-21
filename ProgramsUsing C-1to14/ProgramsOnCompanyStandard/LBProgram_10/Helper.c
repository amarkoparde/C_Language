#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Integer
//  Output :    Boolean
//  Description :   It is used to whether number is perfect or not
//  Author        : Amar Raghunath Koparde
//
//////////////////////////////////////////////////////////////

// Independent function (Atmanirbhar)

BOOL CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)             // updater for negative values
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        // Filter
    {
        return FALSE;
    }
    
    //    iRet = SumOfFactor(iNo);
    
    // Dukanat dryclean karana baher na deta
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Time complexity : O(N/2)
//  Where N is the input for our application.
//
//////////////////////////////////////////////////////////////////////////









